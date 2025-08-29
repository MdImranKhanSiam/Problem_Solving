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

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= i; j++ )
        {
            cout << "*";
        }

        cout << endl;
    }
}
