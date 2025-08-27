#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        bool died = false;

        int height = 1, previous;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( i == 0 )
            {
                if( value == 1 )
                {
                    height++;
                }
            }
            else
            {
                if( value == 1 )
                {
                    if( previous == 0 )
                    {
                        height++;
                    }
                    else
                    {
                        height += 5;
                    }
                }
                else
                {
                    if( previous == 0 )
                    {
                        died = true;
                    }
                }
            }

            previous = value;
        }

        if( died == true )
        {
            cout << -1 << endl;
        }
        else
        {
            cout << height << endl;
        }
    }
}

