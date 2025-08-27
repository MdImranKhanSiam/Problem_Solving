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

        int index = 0;

        for( char &ch : s )
            ch = tolower(ch);

        while( true )
        {
            if( index == s.size()-1 )
                break;

            if( s.at(index) == s.at(index+1) )
                s.erase(index+1,1);
            else
                index++;
        }

        cout << ( (s=="meow") ? "YES" : "NO" ) << endl;
    }
}

