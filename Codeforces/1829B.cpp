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

        int x, large = 0, ct = 0;

        for( int i = 0; i < n; i++ )
        {
            cin >> x;

            if( x == 0 )
            {
                ct++;

                if( ct >= large )
                {
                    large = ct;
                }
            }
            else if( x == 1 )
            {
                ct = 0;
            }
        }

        cout << large << endl;
    }
}
