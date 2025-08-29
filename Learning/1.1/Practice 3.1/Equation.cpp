#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll solve( ll x, ll n )
{
    ll result = 0;

    ll incre = 2;

    while( incre <= n )
    {
        ll value = 1;

        for( int i = 1; i <= incre; i++ )
        {
            value *= x;
        }

        result += value;

        incre += 2;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll x, n;

    cin >> x >> n;

    ll result = solve(x,n);

    cout << result << endl;
}
