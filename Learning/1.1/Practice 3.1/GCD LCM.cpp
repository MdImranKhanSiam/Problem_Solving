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
        ll g, l;

        cin >> g >> l;

        if( l % g != 0 )
        {
            cout << -1 << endl;
        }
        else
        {
            cout << g << " " << l << endl;
        }
    }
}
