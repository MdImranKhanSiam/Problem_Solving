#include <bits/stdc++.h>

using namespace std;

int main()
{
    int value, n, maxx = 1, sq = 1, minn = 0;

    cin >> n >> minn;

    for( int i = 1; i < n; i++ )
    {
        cin >> value;

        if( value >= minn )
        {
            sq++;

            if( maxx < sq )
            {
                maxx = sq;
            }
        }
        else
            sq = 1;

        minn = value;
    }

    cout << maxx << endl;
}
