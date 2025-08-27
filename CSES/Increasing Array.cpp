#include <bits/stdc++.h>

using namespace std;

#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    int previous, total = 0;

    cin >> previous;

    for( int i = 1; i < n; i++ )
    {
        int value, add, zero = 0;

        cin >> value;

        add = max(zero,previous-value);

        total += add;

        previous = value+add;
    }

    cout << total << "\n";
}

