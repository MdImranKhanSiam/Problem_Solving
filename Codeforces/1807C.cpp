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

        map<char,char>same;

        string boolean;

        char binary = '1';

        for( char ch : s )
        {
            if( same[ch] == NULL )
                same[ch] = binary;
            else
                binary = same[ch];

            boolean.push_back(binary);

            if( binary == '0' )
                binary = '1';
            else if( binary == '1' )
                binary = '0';
        }

        bool result = true;

        for( int i = 1; i < n; i++ )
        {
            if( boolean.at(i) == boolean.at(i-1) )
            {
                result = false;
                break;
            }
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}

