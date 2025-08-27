#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        for( int i = 0; s[i] != '\0'; i++ )
        {
            if( s.at(i) == 'U' )
                cout << "D";
            else if( s.at(i) == 'D' )
                cout << "U";
            else
                cout << s.at(i);
        }

        cout << endl;
    }
}

