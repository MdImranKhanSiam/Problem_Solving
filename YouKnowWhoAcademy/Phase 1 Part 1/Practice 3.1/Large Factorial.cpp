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
        ll mod = 1e9+7;

        ll n;

        cin >> n;

        ll fact = 1;

        for( int i = 1; i <= n; i++ )
        {
            fact *= i;

            if( fact >= mod )
            {
                fact %= mod;
            }
        }

        cout << fact << endl;
    }
}
