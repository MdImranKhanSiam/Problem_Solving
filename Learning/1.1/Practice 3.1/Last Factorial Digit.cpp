#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll fact( ll n )
{
    ll result = 1;

    for( int i = 2; i <= n; i++ )
    {
        result *= i;
    }

    return result;
}

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

        cout << fact(n)%10 << endl;
    }
}
