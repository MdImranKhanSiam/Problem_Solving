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

        unordered_set<ll>Set;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            Set.insert(value);

            cout << Set.size();

            if( i < n-1 )
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
