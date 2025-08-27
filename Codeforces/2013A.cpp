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
        int n, x, y, result;

        cin >> n >> x >> y;

        if( x >= y )
        {
            result = n/y;

            if( n % y != 0 )
            {
                result++;
            }
        }
        else
        {
            result = n/x;

            if( n % x != 0 )
            {
                result++;
            }
        }

        cout << result << endl;
    }
}

