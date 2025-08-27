#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int check_upper = 1;

    if( s.size() == 1 )
    {
        if( isupper(s.at(0)) )
            s[0] = tolower(s.at(0));
        else
            s[0] = toupper(s.at(0));
    }
    else
    {
        for( int i = 1; i < s.size(); i++ )
        {
            if( islower(s.at(i)) )
            {
                check_upper = 0;
            }
        }

        if( check_upper == 1 && isupper(s.at(0)) )
        {
            for( int i = 0; i < s.size(); i++ )
            {
                s[i] = tolower(s.at(i));
            }
        }
        else if( check_upper == 1 )
        {
            for( int i = 1; i < s.size(); i++ )
            {
                s[i] = tolower(s.at(i));
            }

            s[0] = toupper(s.at(0));
        }
    }

    cout << s << endl;
}
