#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int h, m;

        cin >> h >> m;

        int x, y;

        x = ( 23 - h ) * 60;
        y = 60 - m;

        cout << x + y << endl;
    }
}
