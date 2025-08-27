#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll builtin_popcount( ll value )
{
    ll result = 0;

    while( value != 0 )
    {
        result += value % 2;

        value /= 2;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, sum = 0;

        cin >> n;

        for( int i = 1; i <= n; i++ )
        {
            sum += builtin_popcount(i);
        }

        cout << sum << endl;
    }
}
