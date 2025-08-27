#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k, ans;
    long double x, temp, t;

    cin >> n >> k;

    t = n;

    if( n % 2 != 0 && ceil(t/2) == k )
    {
        ans = n;
    }
    else if( n % 2 == 0 && n == k )
    {
        ans = n;
    }
    else if( k <= n/2 )
    {
        ans = (k * 2) - 1;
    }
    else if( k > n/2 )
    {
        if( n % 2 == 0 )
        {
            if( k % 2 == 0 )
                ans = ( k - (n/2) )*2;
            else if( k % 2 != 0 )
            {
                temp = k;
                x = ( temp - (n/2) )*2;
                ans = x;
            }

        }
        else if( n % 2 != 0 )
        {
            temp = n;

            x = ((k - (temp/2))*2)-1;

            ans = x;
        }
    }

    cout << ans << endl;
}
