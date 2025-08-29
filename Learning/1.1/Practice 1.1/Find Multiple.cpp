#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b, c, ans = -1;

    cin >> a >> b >> c;

    for( int i = a; i <= b; i++ )
    {
        if( i%c == 0 )
        {
            ans = i;

            break;
        }
    }

    cout << ans << endl;
}
