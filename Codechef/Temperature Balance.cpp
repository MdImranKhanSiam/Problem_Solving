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
        ll n, current, sum = 0;

        cin >> n >> current;

        for( int i = 1; i < n; i++ )
        {
            ll value;

            cin >> value;

            sum += abs(current);

            current += value;
        }

        cout << sum << endl;
    }
}
