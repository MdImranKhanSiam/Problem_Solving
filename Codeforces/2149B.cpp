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

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        sort(store.begin(),store.end());

        ll diff, Max = LLONG_MIN;

        for( int i = 1, j = 0; i <= n/2; i++, j += 2 )
        {
            diff = abs(store[j]-store[j+1]);

            if( diff > Max )
            {
                Max = diff;
            }
        }

        cout << Max << endl;
    }
}
