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

        vector<ll>store, temp;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            temp.push_back(value);
        }

        ll Begin, End;

        sort(temp.begin(),temp.end(),greater<int>());




    }
}
