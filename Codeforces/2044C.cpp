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
        ll m, a, b, c, aa, bb, cc;

        cin >> m >> a >> b >> c;

        aa = min(m,a);

        bb = min(m,b);

        cc = min((m*2)-(aa+bb),c);

        cout << aa+bb+cc << endl;
    }
}
