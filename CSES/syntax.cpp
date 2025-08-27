#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll Bin_Expo( ll base, ll expo, ll mod )
{
    if( expo == 0 )
    {
        return 1;
    }

    ll value = Bin_Expo(base,expo/2,mod) % mod;

    ll result = (value * value) % mod;

    if( expo % 2 != 0 )
    {
        result = (result * (base % mod)) % mod;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll tc;

    cin >> tc;

    while( tc-- )
    {
        int MOD = 1000000007;

        ll a, b, answer;

        cin >> a >> b;

        answer = Bin_Expo(a,b,MOD);

        cout << answer << endl;
    }
}
