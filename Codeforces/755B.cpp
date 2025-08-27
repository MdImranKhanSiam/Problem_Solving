#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    map<string,bool>poland;

    for( int i = 0; i < n; i++ )
    {
        string s;

        cin >> s;

        poland[s] = true;
    }

    int non_unique = 0;

    for( int i = 0; i < m; i++ )
    {
        string s;

        cin >> s;

        if( poland[s] == true )
            non_unique++;
    }

    bool result;

    if( n > m )
        result = true;
    else if( n < m )
        result = false;
    else
    {
        if( non_unique % 2 != 0 )
            result = true;
        else
            result = false;
    }

    cout << ( (result==true) ? "YES" : "NO" ) << endl;
}

