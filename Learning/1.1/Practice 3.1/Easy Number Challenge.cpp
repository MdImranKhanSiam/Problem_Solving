#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll range = 1e6;

    vector<ll>divisor(range+1,0);

    for( int i = 1; i <= range; i++ )
    {
        for( int j = i; j <= range; j += i )
        {
            divisor[j]++;
        }
    }

    ll mod = 1073741824;

    ll a, b, c;

    cin >> a >> b >> c;

    ll result = 0;

    for( int i = 1; i <= a; i++ )
    {
        for( int j = 1; j <= b; j++ )
        {
            for( int k = 1; k <= c; k++ )
            {
                result += divisor[i*j*k];

                if( result >= mod )
                {
                    result %= mod;
                }
            }
        }
    }

    cout << result << endl;
}
