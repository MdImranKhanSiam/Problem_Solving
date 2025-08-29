#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    while( true )
    {
        ll a, b, c;

        cin >> a >> b >> c;

        if( a == 0 && b == 0 && c == 0 )
        {
            break;
        }

        if( a+(2*(b-a)) == c )
        {
            cout << "AP " << c+(c-b) << endl;
        }

        if( (double) b/a == (double) c/b )
        {
            cout << "GP " << c*(c/b) << endl;
        }
    }
}
