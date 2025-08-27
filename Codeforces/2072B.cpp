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
        ll n, up = 0, down = 0, a, b, c, d;

        string s;

        cin >> n >> s;

        for( auto point : s )
        {
            if( point == '-' )
            {
                up++;
            }
            else
            {
                down++;
            }
        }

        a = up/2;

        b = up-a;

        c = b*down;

        d = c*a;

        cout << d << endl;
    }
}
