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

        for( ll i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        sort(store.begin(),store.end());

        ll incre = 0, cost = 0;

        for( auto point : store )
        {
            cost += max(0ll,point-incre);

            incre++;
        }

        cout << cost << endl;
    }
}
