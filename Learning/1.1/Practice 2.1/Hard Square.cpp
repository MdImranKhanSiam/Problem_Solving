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
        cout << "*" << " ";
    }

    cout << endl;

    for( int i = 1; i <= n-2; i++ )
    {
        cout << "*";

        for( int j = 1; j <= (n*2)-3; j++ )
        {
            cout << " ";
        }

        cout << "*" << endl;
    }

    for( int i = 1; i <= n; i++ )
    {
        cout << "*" << " ";
    }

    cout << endl;
}
