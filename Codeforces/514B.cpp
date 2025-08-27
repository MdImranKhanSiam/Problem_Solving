#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;

    cin >> n >> x >> y;

    int arr[n][2];

    for( int i = 0; i < n; i++ )
    {
        int xt, yt;

        cin >> xt >> yt;

        arr[i][0] = x-xt;
        arr[i][1] = y-yt;
    }

    int shots = 0;

    map<int,bool>track;

    for( int i = 0; i < n; i++ )
    {
        if( track[i] != true )
        {
            shots++;

            int cx, cy;

            cx = arr[i][0];
            cy = arr[i][1];

            track[i] = true;

            for( int j = 0; j < n; j++ )
            {
                if( track[j] != true )
                {
                    if( (cx/arr[j][0]) == (cy/arr[j][1]) )
                        track[j] = true;
                }
            }
        }
    }

    cout << shots << endl;
}
