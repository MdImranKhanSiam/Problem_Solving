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
        ll n, k, p, result;

        cin >> n >> k >> p;

        result = abs(k)/p;

        if( k % p != 0 )
        {
            result++;
        }

        if( result > n )
        {
            cout << -1;
        }
        else
        {
            cout << result;
        }

        cout << endl;
    }
}
