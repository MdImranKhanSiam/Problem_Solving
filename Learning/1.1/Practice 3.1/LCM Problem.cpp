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
        ll l, r;

        cin >> l >> r;

        if( l*2 <= r )
        {
            cout << l << " " << l*2 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}
