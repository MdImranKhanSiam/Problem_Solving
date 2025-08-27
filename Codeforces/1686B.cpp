#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, total = 0, previous = 0;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( previous == 0 )
            {
                previous = value;
            }
            else
            {
                if( previous > value )
                {
                    total++;

                    previous = 0;
                }
                else
                {
                    previous = value;
                }
            }
        }

        cout << total << endl;
    }
}
