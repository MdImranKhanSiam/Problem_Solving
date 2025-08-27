#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, Max = LLONG_MIN, current = -2e9;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        current = max(value,value+current);

        Max = max(Max,current);
    }

    cout << Max << endl;
}
