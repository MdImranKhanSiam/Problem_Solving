import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np
from sklearn.manifold import MDS
import json
import os
from sklearn.manifold import MDS
from sklearn.preprocessing import MinMaxScaler

def visualize_tours_with_real_distances(
    tours,
    distance_matrix,
    save_as="mp4",
    fps=10,
    loop=True,
    coords=None,
    use_mds=True,
    filename="tours_animation",
    figsize=(6,6),
):
    """
    Visualize TSP tours using 2D coordinates derived from an actual distance matrix.

    Parameters
    ----------
    tours : list[list[int]]
        Each element is a list of city indices (tour must include closure if desired, e.g. [0,1,2,0]).
    distance_matrix : 2D array-like
        Symmetric n x n distance matrix (diagonal zeros).
    save_as : str
        "mp4" or "gif" or None (None means don't save, just show).
    fps : int
        Target frames per second for saving and playback (used to compute interval).
    loop : bool
        If True, animation will repeat when played in a viewer.
    coords : None or (n,2) array
        Optional precomputed coordinates for cities. If None and use_mds=True, MDS reconstructs coords.
    use_mds : bool
        If True and coords is None, use MDS to get coords from distance_matrix.
    filename : str
        Base filename for saved animation (extension added automatically).
    figsize : tuple
        Figure size for plotting.

    Returns
    -------
    out_path : str or None
        Path to saved file, or None if not saved.
    """

    # --- Basic validation ---
    distance_matrix = np.array(distance_matrix)
    if distance_matrix.ndim != 2 or distance_matrix.shape[0] != distance_matrix.shape[1]:
        raise ValueError("distance_matrix must be a square 2D array")

    n = distance_matrix.shape[0]
    if any(max(t) >= n or min(t) < 0 for t in tours):
        raise ValueError("Tours contain city indices outside range of distance_matrix size")

    # --- Get coordinates: either user-provided or compute with MDS ---
    if coords is None:
        if not use_mds:
            # Simple spring layout as fallback (not distance-preserving)
            rng = np.random.RandomState(42)
            coords = rng.rand(n, 2) * 10
        else:
            # Use MDS to get coordinates from distance matrix
            mds = MDS(
            n_components=2,
            dissimilarity="precomputed",
            random_state=42,
            n_init=10,
            max_iter=2000,
            eps=1e-9,
            normalized_stress="auto",
            )
        coords = mds.fit_transform(distance_matrix)

        # Scale coordinates proportionally so distances visually match actual distances
        scaler = MinMaxScaler(feature_range=(-5, 5))
        coords = scaler.fit_transform(coords)
        coords = coords - coords.mean(axis=0)

    coords = np.array(coords)
    if coords.shape != (n, 2):
        raise ValueError(f"coords must be shape ({n}, 2)")

    # --- Normalize coordinates for nicer plotting (center and scale) ---
    coords = coords - coords.mean(axis=0)
    # scale so max absolute coordinate ~ 4 (tunable)
    max_abs = np.max(np.abs(coords))
    if max_abs > 0:
        coords = coords / max_abs * 4.0

    # --- Setup figure and static artists ---
    fig, ax = plt.subplots(figsize=figsize)
    margin = 0.8
    ax.set_xlim(coords[:, 0].min() - margin, coords[:, 0].max() + margin)
    ax.set_ylim(coords[:, 1].min() - margin, coords[:, 1].max() + margin)
    ax.set_aspect("equal", adjustable="box")
    ax.set_title("TSP Tours (MDS layout of distances)")

    scatter = ax.scatter(coords[:, 0], coords[:, 1], color="red", s=60, zorder=3)
    text_artists = []
    for i, (x, y) in enumerate(coords):
        txt = ax.text(x + 0.12, y + 0.12, str(i), fontsize=9, zorder=4)
        text_artists.append(txt)

    # line artist for current tour path
    line, = ax.plot([], [], color="blue", linewidth=2, alpha=0.85, zorder=2)

    # optionally draw all-pairs faint lines to show connectivity (commented out by default)
    # for i in range(n):
    #     for j in range(i+1, n):
    #         ax.plot([coords[i,0], coords[j,0]], [coords[i,1], coords[j,1]], color='gray', alpha=0.05, zorder=0)

    # --- prepare tours: make sure each tour is a sequence of indices ---
    prepared_tours = []
    for t in tours:
        # if the tour doesn't close (first != last), we can append the first city to close it for drawing
        if len(t) >= 1 and t[0] != t[-1]:
            prepared_tours.append(list(t) + [t[0]])
        else:
            prepared_tours.append(list(t))

    num_frames = len(prepared_tours)
    if num_frames == 0:
        raise ValueError("No tours provided")

    # --- Update function (blit=False for reliability because we update texts/title) ---
    def update(frame):
        tour = prepared_tours[frame]
        xs = [coords[i, 0] for i in tour]
        ys = [coords[i, 1] for i in tour]
        line.set_data(xs, ys)
        ax.set_title(f"Tour {frame+1}/{num_frames}")
        # Return artists if blitting; not used here because blit=False
        return (line,)

    # --- compute interval from fps; ensure integer ms >= 1 ---
    interval_ms = max(1, int(round(1000.0 / max(1, fps))))

    ani = animation.FuncAnimation(
        fig,
        update,
        frames=num_frames,
        interval=interval_ms,
        blit=False,
        repeat=loop,
    )

    out_path = None
    if save_as is not None:
        save_as_lower = save_as.lower()
        out_path = None
        try:
            if save_as_lower == "mp4":
                out_path = f"{filename}.mp4"
                # try to save with ffmpeg writer
                ani.save(out_path, writer="ffmpeg", fps=fps)
            elif save_as_lower == "gif":
                out_path = f"{filename}.gif"
                ani.save(out_path, writer="pillow", fps=fps)
            else:
                raise ValueError("save_as must be 'mp4', 'gif', or None")
            print(f"✅ Saved animation as {out_path}")
        except Exception as e:
            # fallback: if mp4 failed (no ffmpeg), try gif
            print("⚠️ Saving failed:", e)
            if save_as_lower == "mp4":
                try:
                    out_path = f"{filename}.gif"
                    ani.save(out_path, writer="pillow", fps=fps)
                    print(f"✅ Saved animation as GIF fallback: {out_path}")
                except Exception as e2:
                    print("❌ Fallback GIF save also failed:", e2)
                    out_path = None
            else:
                out_path = None

    plt.show()
    return out_path
