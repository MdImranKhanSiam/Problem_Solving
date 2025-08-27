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
        ll n, x;

        cin >> n >> x;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        sort(store.begin(),store.end(),greater<ll>());

        ll Teams = 0, Count = 1, current;

        for( int i = 0; i < n; i++ )
        {

            current = store[i];


            if( current*Count >= x )
            {
                Teams++;

                Count = 1;
            }
            else
            {
                Count++;
            }
        }

        cout << Teams << endl;
    }
}
