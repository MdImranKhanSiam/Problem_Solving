#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, sum = 0, odds = 0, min_odd = LLONG_MAX;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        sum += value;

        if( value % 2 != 0 )
        {
            odds++;

            if( value < min_odd )
            {
                min_odd = value;
            }
        }
    }

    if( odds % 2 == 0 )
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum-min_odd << endl;
    }
}
