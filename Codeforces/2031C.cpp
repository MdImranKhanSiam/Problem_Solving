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
        int n;

        cin >> n;

        if( n % 2 != 0 )
        {
            if( n < 27 )
            {
                cout << -1 << endl;
            }
            else
            {
                for( int i = 1, j = 3; i <= n; i += 2 )
                {
                    if( i == 1 || i == 10 || i == 26 )
                    {
                        cout << 1 << " ";

                        i--;
                    }
                    else if( i == 11 || i == 27 )
                    {
                        cout << 2 << " ";

                        i--;
                    }
                    else
                    {
                        cout << j << " " << j << " ";

                        j++;
                    }
                }

                cout << endl;
            }
        }
        else
        {
            for( int i = 1, j = 1; i <= n; i += 2, j++ )
            {
                cout << j << " " << j << " ";
            }

            cout << endl;
        }
    }
}
