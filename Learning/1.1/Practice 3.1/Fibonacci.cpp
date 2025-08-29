#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll fibonacci( ll n )
{
    if( n == 1 )
    {
        return 0;
    }

    if( n == 2 )
    {
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    cout << fibonacci(n) << endl;
}
