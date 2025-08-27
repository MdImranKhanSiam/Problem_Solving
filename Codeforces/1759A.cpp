#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        int repeat = (s.size()/3)+2;

        string yes;

        for( int i = 0; i < repeat; i++ )
        {
            yes.append("Yes");
        }

        if( yes.find(s) != string::npos )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

