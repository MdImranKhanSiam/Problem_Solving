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
        ll length = 400000, n, penalty = 0;

        cin >> n;

        vector<ll>Hashmap(length,0);

        for( int i = 1; i <= n; i++ )
        {
            ll value;

            cin >> value;

            Hashmap[value] = i;
        }

        for( int i = 1; i <= length; i++ )
        {
            if( Hashmap[i] != 0 )
            {
                penalty += Hashmap[i];
            }
        }

        cout << penalty << endl;
    }
}
