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

        for( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < n-i; j++ )
            {
                ll Max = LLONG_MIN;

                for( int k = 0; k < i+1; k++ )
                {
                    Max = max(Max,store[j+k]);
                }

                cout << Max << " ";
            }
        }

        cout << endl;
    }
}
