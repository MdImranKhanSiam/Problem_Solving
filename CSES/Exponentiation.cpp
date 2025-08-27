#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll Modulo(ll base, ll exponent, ll MOD)
{
    if (exponent == 0)
    {
        return 1;
    }

    if (exponent == 1)
    {
        return base % MOD;
    }

    ll temp = Modulo(base, exponent / 2, MOD);

    if (exponent % 2 == 0)
    {
        return (temp * temp) % MOD;
    }
    else
    {
        return (((temp * temp) % MOD) * base) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll tc;

    cin >> tc;

    while( tc-- )
    {
        ll a, b, c, result;

        cin >> a >> b >> c;

        result = Modulo(a,Modulo(b,c,1000000006),1000000007);

        cout << result << "\n";
    }
}

