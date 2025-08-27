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
        ll value = 0;

        for( int i = 1; i <= 3; i++ )
        {
            ll l, b;

            cin >> l >> b;

            value += l*b;
        }

        ll temp = sqrt(value);

        if( (sqrt(value) == temp) && temp % 2 != 0 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
