#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll factorial( ll n )
{
    if( n == 1 )
    {
        return 1;
    }

    return factorial(n-1)*n;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    cout << factorial(n) << endl;
}
