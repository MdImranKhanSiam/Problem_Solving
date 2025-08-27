#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n, d, b;
    bool flag = true;

    cin >> s >> n;

    set<int>dragon;

    map<int,int>bonus;

    for( int i = 0; i < n; i++ )
    {
        cin >> d >> b;

        dragon.insert(d);

        if( bonus[d] != NULL )
            bonus[d] += b;
        else
            bonus[d] = b;
    }

    for( int value : dragon )
    {
        if( s <= value )
        {
            flag = false;
            break;
        }

        s += bonus[value];
    }

    cout << ( (flag == true) ? "YES" : "NO" ) << endl;
}
