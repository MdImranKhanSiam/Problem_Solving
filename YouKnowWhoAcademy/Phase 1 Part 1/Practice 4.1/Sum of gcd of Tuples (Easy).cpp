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

    ll result = 0;

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
        {
            for( int k = 1; k <= n; k++ )
            {
                result += __gcd(i,__gcd(j,k));
            }
        }
    }

    cout << result << endl;
}
