#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll sequence( ll n )
{
    ll total = 1;

    if( n == 1 )
    {
        return 1;
    }

    ll result;

    if( n % 2 == 0 )
    {
        result = n/2;
    }
    else
    {
        result = (3*n)+1;
    }

    total += sequence(result);

    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    cout << sequence(n) << endl;
}
