#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void print( ll n )
{
    if( n == 0 )
    {
        return;
    }

    cout << n;

    if( n > 1 )
    {
        cout << " ";
    }

    print(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    print(n);

    cout << endl;
}
