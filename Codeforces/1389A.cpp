#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int l, r;

        cin >> l >> r;

        if( l*2 <= r )
            cout << l << " " << l*2 << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
}

