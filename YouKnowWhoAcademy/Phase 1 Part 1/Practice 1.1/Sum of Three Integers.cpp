#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll k, s, result = 0;

    cin >> k >> s;

    for( int i = 0; i <= k; i++ )
    {
        for( int j = 0; j <= k; j++ )
        {
            ll current = s-(i+j);

            if( current >= 0 && current <= k )
            {
                result++;
            }
        }
    }

    cout << result << endl;
}
