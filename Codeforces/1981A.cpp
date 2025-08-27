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
        ll l, r, value = 1, result = 0;

        cin >> l >> r;

        while( value <= r )
        {
            value *= 2;

            result++;
        }

        cout << result-1 << endl;
    }
}
