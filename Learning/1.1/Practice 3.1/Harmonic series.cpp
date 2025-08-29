#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    double result = 0.0;

    for( int i = 1; i <= n; i++ )
    {
        result += (double) 1/i;
    }

    cout << fixed << setprecision(4) << result << endl;
}
