#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n;

        cin >> n;

        if( n % 2 == 0 )
        {
            cout << -1 << endl;
        }
        else
        {
            for( int i = n; i >= 1; i-- )
            {
                cout << i << " ";
            }

            cout << endl;
        }
    }


}
