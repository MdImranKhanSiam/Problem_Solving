#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, sum, exclude = 0, power = 0;

        cin >> n;

        sum = (n*(n+1))/2;

        while( true )
        {
            ll result = pow(2,power++);

            if( result <= n )
            {
                exclude += result;
            }
            else
            {
                break;
            }
        }

        cout << sum-(2*exclude) << endl;
    }
}
