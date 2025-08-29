#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void binary( ll n )
{
    if( n == 0 )
    {
        return;
    }

    ll bit = n%2;

    binary(n/2);

    cout << bit;
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

        binary(n);

        cout << endl;
    }
}
