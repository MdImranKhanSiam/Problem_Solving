#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double x, n;

        cin >> x >> n;

        if( x/n == floor(x/n) )
            cout << fixed << setprecision(0) << x/n << endl;
        else
        {
            int maxx, minn;
            long long int a, b, ans;

            double x1, x2, x3;

            x1 = ceil(x/n);

            while( true )
            {
                x2 = x1*(n-1);

                if( x2 <= x )
                    break;
                else
                    x1--;
            }

            x3 = x-x2;

            if( x3 == 0 )
                x3 = x1;

            a = x1;
            b = x3;

            maxx = __gcd(a,b);


            x1 = floor(x/n);

            while( true )
            {
                x2 = x1*(n-1);

                if( x2 <= x )
                    break;
                else
                    x1--;
            }

            x3 = x-x2;

            if( x3 == 0 )
                x3 = x1;

            a = x1;
            b = x3;

            minn = __gcd(a,b);

            ans = max( maxx, minn );

            cout << fixed << setprecision(0) << ans << endl;
        }
    }
}

