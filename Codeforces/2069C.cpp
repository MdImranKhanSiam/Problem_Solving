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

        vector<ll>store, position_1, position_3, prefix_2;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            if( value == 1 )
            {
                position_1.push_back(i);
            }
            else if( value == 3 )
            {
                position_3.push_back(i);
            }


        }
    }
}
