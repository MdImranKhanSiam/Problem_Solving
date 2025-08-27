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
        ll n, sum = 0;

        cin >> n;

        vector<ll>store;

        for( ll i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            sum += value;
        }

        bool result = true;

        if( sum % n == 0 )
        {
            ll target = sum/n;

            for( ll i = 0; i < n-2; i++ )
            {
                ll value = target-store[i];

                store[i] += value;

                if( value < 0 )
                {
                    store[i+2] += abs(value);
                }
                else
                {
                    store[i+2] -= abs(value);
                }
            }

            for( auto point : store )
            {
                if( point != target )
                {
                    result = false;

                    break;
                }
            }
        }
        else
        {
            result = false;
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}
