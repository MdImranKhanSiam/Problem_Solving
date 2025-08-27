#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll log2( ll n )
{
    if( n == 1 )
    {
        return 0;
    }

    ll result = 1;

    result += log2(n/2);

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    cout << log2(n) << endl;
}
