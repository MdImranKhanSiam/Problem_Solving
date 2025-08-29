#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll range = 1e7;

    vector<ll>divisor(range+1,0);

    for( int i = 1; i <= range; i++ )
    {
        for( int j = i; j <= range; j += i )
        {
            divisor[j]++;
        }
    }

    ll n;

    cin >> n;

    ll result = 0;

    for( int i = 1; i <= n; i++ )
    {
        result += i*(divisor[i]);
    }

    cout << result << endl;
}
