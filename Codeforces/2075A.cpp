#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, k, moves = 0;

        cin >> n >> k;

        if( k < n )
        {
            if( n % 2 != 0 )
            {
                n -= k;

                moves = 1;
            }

            k--;

            if( k <= n )
            {
                moves += n/k;

                if( n % k != 0 )
                {
                    moves++;
                }
            }
            else
            {
                moves++;
            }
        }
        else
        {
            moves = 1;
        }

        cout << moves << endl;
    }
}
