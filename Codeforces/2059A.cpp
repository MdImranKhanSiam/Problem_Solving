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

        set<ll>set1, set2;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            set1.insert(value);
        }

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            set2.insert(value);
        }

        ll size1 = set1.size(), size2 = set2.size();

        bool result = false;

        if( size1 >= 2 && size2 >= 2 )
        {
            result = true;
        }
        else if( size1 == 1 && size2 >= 3 )
        {
            result = true;
        }
        else if( size1 >= 3 && size2 == 1 )
        {
            result = true;
        }

        cout << ( (result == true) ? "YES" : "NO" ) << endl;
    }
}
