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
        ll a, b;

        cin >> a >> b;

        ll result;

        if( a % b == 0 )
        {
            result = 0;
        }
        else
        {
            result = ((ceil((double)a/b))*b)-a;
        }

        cout << result << endl;
    }
}
