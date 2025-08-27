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
        int x1, x2, y1, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        bool result = false;

        if( (x1 > y1 && x2 > y2) || (y1 > x1 && y2 > x2) )
        {
            result = true;
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}

