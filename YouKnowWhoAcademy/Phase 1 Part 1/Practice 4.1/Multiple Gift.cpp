#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll x, y;

    cin >> x >> y;

    ll result = 0;

    while( x <= y )
    {
        x *= 2;

        result++;
    }

    cout << result << endl;
}
