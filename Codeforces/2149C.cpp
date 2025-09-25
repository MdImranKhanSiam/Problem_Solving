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
        ll n, k;

        cin >> n >> k;

        vector<ll>store, hashmap(n+1,0);

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            hashmap[value] = 1;

            store.push_back(value);
        }

        sort(store.begin(),store.end());

        ll not_present = 0, k_present = 0;

        for( int i = 0; i <= k-1; i++ )
        {
            if( hashmap[i] == 0 )
            {
                not_present++;
            }
        }

        for( auto point : store )
        {
            if( point == k )
            {
                k_present++;
            }
        }

        cout << max(not_present,k_present) << endl;
    }

}


//Every value from 0 to k-1 has to be present inside the array.
//K cannot be present in the array.
