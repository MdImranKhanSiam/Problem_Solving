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
        ll n;

        cin >> n;

        ll result = 0;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            result += value;
        }

        cout << abs(result) << endl;
    }
}
