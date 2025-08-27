#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, c, x, y;

        cin >> a >> b >> c >> x >> y;

        x = max(0,x-a);
        y = max(0,y-b);

        cout << ( (x+y<=c) ? "YES" : "NO" ) << endl;
    }
}


