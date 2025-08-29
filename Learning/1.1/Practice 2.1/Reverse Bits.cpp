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
        ll n, result = 0, one = 1;

        cin >> n;

        vector<ll>store;

        for( int i = 0; i < 32; i++ )
        {
            ll bit = (n >> i) & one;

            store.push_back(bit);
        }

        reverse(store.begin(),store.end());

        for( int i = 0; i < 32; i++ )
        {
            if( store[i] )
            {
                result += (one << i);
            }
        }

        cout << result << endl;
    }
}
