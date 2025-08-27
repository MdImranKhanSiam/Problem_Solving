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

        bool result = false;

        for( int i = 1; s[i] != '\0'; i++ )
        {
            if( (s.at(i) == 'a' && s.at(i-1) == 'b') || (s.at(i) == 'b' && s.at(i-1) == 'a') )
            {
                cout << i << " " << i+1 << endl;
                result = true;
                break;
            }
        }

        if( result == false )
            cout << -1 << " " << -1 << endl;
    }
}

