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
        ll n, total = 0;

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
            for( int j = i; j < n; j++ )
            {
                bool ascending = true;

                ll previous = LLONG_MAX;

                for( int k = i; k <= j; k++ )
                {
                    if( previous == LLONG_MAX )
                    {
                        previous = store[k];
                    }
                    else
                    {
                        if( previous > store[k] )
                        {
                            ascending = false;
                        }

                        previous = store[k];
                    }
                }

                if( ascending == true )
                {
                    total++;
                }
            }
        }

        cout << total << endl;
    }
}
