#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    ll odd, even;

    odd = n/2;

    if( n % 2 != 0 )
    {
        odd++;
    }

    even = n/2;

    ll result;

    if( k <= odd )
    {
        result = (k*2)-1;
    }
    else
    {
        result = (k-odd)*2;
    }

    cout << result << endl;
}
