import heapq

def check_overflow(cell):
    result = True

    if cell[0] < 0 or cell[0] > 2:
        result = False

    if cell[1] < 0 or cell[1] > 2:
        result = False

    return result

def print_puzzle(matrix):
    for row in matrix:
        for column in row:
            print(column, end=" ")
        print()

def check_puzzle(matrix):
    result = 0

    eight_puzzle = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 0]
    ]

    for i in range(3):
        for j in range(3):
            if eight_puzzle[i][j] == matrix[i][j]:
                result += 1

    return result


def solve_eight_puzzle(matrix, Backtrack, Backtrack_Puzzle):
    tracker = 0

    Queue = []
    store_state = []

    Backtrack.append(0)
    Backtrack_Puzzle.append(matrix)

    heapq.heappush(Queue, (-check_puzzle(matrix), (matrix, 0)))

    store_state.append(matrix)

    while Queue:
        value = heapq.heappop(Queue)
        priority_matrix, current_track = value[1]

        if check_puzzle(priority_matrix) == 9:
            tracker = current_track
            break

        action = [(0, -1), (0, 1), (-1, 0), (1, 0)]

        empty_cell = None
        for i in range(3):
            for j in range(3):
                if priority_matrix[i][j] == 0:
                    empty_cell = (i, j)
                    break
            if empty_cell:
                break

        for i in range(4):
            current_matrix = [row[:] for row in priority_matrix]

            new_row = action[i][0]
            new_column = action[i][1]

            swap_cell = (empty_cell[0] + new_row, empty_cell[1] + new_column)

            if check_overflow(swap_cell):
                current_matrix[empty_cell[0]][empty_cell[1]], current_matrix[swap_cell[0]][swap_cell[1]] = \
                    current_matrix[swap_cell[0]][swap_cell[1]], current_matrix[empty_cell[0]][empty_cell[1]]

                if current_matrix in store_state:
                    continue
                else:
                    Backtrack.append(current_track)
                    Backtrack_Puzzle.append(current_matrix)

                    new_track = len(Backtrack) - 1

                    heapq.heappush(Queue, (-check_puzzle(current_matrix), (current_matrix, new_track)))

                    store_state.append(current_matrix)

    return tracker

n = 3

matrix = [
    [1, 3, 6],
    [4, 2, 0],
    [7, 5, 8]
]

Backtrack = []
Backtrack_Puzzle = []

Tracker = solve_eight_puzzle(matrix, Backtrack, Backtrack_Puzzle)

Solving_Path = []
current = Tracker

Solving_Path.append(Backtrack_Puzzle[current])

while current != Backtrack[current]:
    current = Backtrack[current]
    Solving_Path.append(Backtrack_Puzzle[current])

Solving_Path.reverse()

for point in Solving_Path:
    print_puzzle(point)
    print()
