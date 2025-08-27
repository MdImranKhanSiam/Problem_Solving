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
        ll n;

        cin >> n;

        if( n == 2 || n == 3 || n == 4 )
        {
            cout << -1;
        }
        else
        {
            ll odd, even;

            even = n/2;

            odd = even;

            if( n % 2 != 0 )
            {
                odd++;
            }

            for( ll i = 1, j = 1; i <= odd; i++, j += 2 )
            {
                if( j != 5 )
                {
                    cout << j << " ";
                }
            }

            cout << 5 << " " << 4 << " ";

            for( ll i = 1, j = 2; i <= even; i++, j += 2 )
            {
                if( j != 4 )
                {
                    cout << j << " ";
                }
            }
        }

        cout << endl;
    }
}
