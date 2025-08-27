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
        ll n, result = 0;

        cin >> n;

        for( int i = 1; i <= n; i++ )
        {
            ll value;

            cin >> value;

            if( value > i )
            {
                result = max(result,value-i);
            }
        }

        cout << result << endl;
    }
}
