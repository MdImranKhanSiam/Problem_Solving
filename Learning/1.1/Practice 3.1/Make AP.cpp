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
        ll a, b, c;

        cin >> a >> b >> c;

        bool result = false;

        ll change_a = (2*b)-c;

        if( change_a >= a && change_a % a == 0 )
        {
            result = true;
        }

        ll change_b = a+((c-a)/2);

        if( change_b >= b && change_b % b == 0 && (c-a) % 2 == 0 )
        {
            result = true;
        }

        ll change_c = (2*b)-a;

        if( change_c >= c && change_c % c == 0 )
        {
            result = true;
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}
