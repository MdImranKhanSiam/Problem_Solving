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
        ll n, target;

        cin >> n >> target;

        ll result;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( i == 0 )
            {
                result = value;
            }
            else
            {
                result &= value;
            }
        }

        if( result < target )
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}
