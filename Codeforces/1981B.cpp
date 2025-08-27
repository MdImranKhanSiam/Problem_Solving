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
        ll n, m, limit, value = 1, sum = 1;

        cin >> n >> m;

        limit = n+m;

        while( true )
        {
            value *= 2;

            sum += value;

            if( sum >= limit )
            {
                break;
            }
        }

        cout << sum << endl;
    }
}
