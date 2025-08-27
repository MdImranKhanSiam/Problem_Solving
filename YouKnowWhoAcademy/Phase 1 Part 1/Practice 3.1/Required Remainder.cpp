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
        ll x, y, n;

        cin >> x >> y >> n;

        ll result;

        if( n % x >= y )
        {
            result = n-((n%x)-y);
        }
        else
        {
            result = (n-(n%x))-(x-y);
        }

        cout << result << endl;
    }
}
