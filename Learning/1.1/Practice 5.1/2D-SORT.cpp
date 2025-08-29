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

        unordered_map<ll,vector<ll>>store;

        unordered_set<ll>keys;

        for( int i = 0; i < n; i++ )
        {
            ll v1, v2;

            cin >> v1 >> v2;

            keys.insert(v1);

            store[v1].push_back(v2);
        }

        vector<ll>store2;

        for( auto point : keys )
        {
            store2.push_back(point);
        }

        sort(store2.begin(),store2.end());

        for( auto point : store2 )
        {
            sort(store[point].begin(),store[point].end(),greater<ll>());

            for( auto value : store[point] )
            {
                cout << point << " " << value << endl;
            }
        }
    }
}
