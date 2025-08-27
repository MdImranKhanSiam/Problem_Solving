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

        vector<ll>store;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        ll mini = LLONG_MAX;

        for( int i = 0; i < n; i++ )
        {
            for( int j = i+1 ; j < n; j++ )
            {
                ll result = store[i]+store[j]+j-i;

                if( result < mini )
                {
                    mini = result;
                }
            }
        }

        cout << mini << endl;
    }


}
