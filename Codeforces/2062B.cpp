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
        bool result = true;

        ll n;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            ll value, left, right;

            cin >> value;

            left = (i*2)+1;

            right = ((n-(i+1))*2)+1;

            if( value < max(left,right) )
            {
                result = false;
            }
        }

        cout << ((result == true) ? "YES" : "NO") << endl;
    }
}
