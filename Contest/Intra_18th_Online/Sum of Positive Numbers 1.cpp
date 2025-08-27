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

    ll sum = 0;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        sum += abs(value);
    }

    cout << sum << endl;
}
