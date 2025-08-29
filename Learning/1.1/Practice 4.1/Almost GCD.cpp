#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    ll result, current_max = 0;

    for( int i = 2; i <= 1000; i++ )
    {
        ll divisible = 0;

        for( auto point : store )
        {
            if( point % i == 0 )
            {
                divisible++;
            }
        }

        if( divisible > current_max )
        {
            current_max = divisible;

            result = i;
        }
    }

    cout << result << endl;
}
