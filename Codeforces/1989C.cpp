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

        ll first = 0, second = 0;

        vector<ll>store1, store2;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            first += value;

            store1.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            second += value;

            store2.push_back(value);
        }

        ll result1 = 0, result2 = 0;

        for( int i = 0; i < n; i++ )
        {
            ll value1, value2;

            value1 = store1[i];

            value2 = store2[i];


        }
    }
}

-1 0 1 0 -1 -1 -1 1
1 1 1 1 -1 -1 -1 -1
