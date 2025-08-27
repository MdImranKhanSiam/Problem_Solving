#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, result;

    cin >> n;

    ll limit = n/2, low;

    low = max(1LL,limit-1000000);

    for( int i = low; i <= limit+1000000; i++ )
    {
        ll one = i;

        if( one+((one-1)*2) == n  )
        {
            result = one+(one-1);

            break;
        }
        else if( one+(one*2) == n )
        {
            result = one+one;

            break;
        }
        else if( one+((one+1)*2) == n )
        {
            result = one+(one+1);

            break;
        }

        one++;
    }

    cout << result << endl;
}
