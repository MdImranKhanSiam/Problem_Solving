#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void digit( ll n )
{
    if( n == 0 )
    {
        return;
    }

    ll last_digit = n % 10;

    digit(n / 10);

    cout << last_digit << " ";
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

        digit(n);

        if( n == 0 )
        {
            cout << 0;
        }

        cout << endl;
    }
}
