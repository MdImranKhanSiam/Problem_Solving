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
        int x, y, total_x;

        cin >> x >> y;

        total_x = x/2;

        for( int i = 1; i <= total_x; i++ )
        {
            cout << 1;
        }

        for( int i = 1; i <= y; i++ )
        {
            cout << 2;
        }

        for( int i = 1; i <= total_x; i++ )
        {
            cout << 1;
        }

        cout << endl;
    }
}
