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

        if( n == 1 )
        {
            cout << 1 << endl;
        }
        else if( n % 2 == 0 )
        {
            cout << -1 << endl;
        }
        else
        {
            int part = (n+1)/2, current;

            for( int i = 1; i <= part; i++ )
            {
                if( i == 1 )
                {
                    cout << n << " ";

                    current = n-2;
                }
                else
                {
                    cout << current << " " << current+1 << " ";

                    current = current-2;
                }
            }
        }
    }
}
