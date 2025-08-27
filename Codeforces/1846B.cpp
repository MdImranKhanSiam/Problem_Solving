#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s[3];

        char result = '?';

        for( int i = 0; i < 3; i++ )
        {
            cin >> s[i];

            set<char>match;

            if( result == '?' )
            {
                for( char ch : s[i] )
                {
                    match.insert(ch);
                }

                if( match.size() == 1 && *(match.begin()) != '.' )
                {
                    result = *(match.begin());
                }
            }
        }

        if( result == '?' )
        {
            for( int i = 0; i < 3; i++ )
            {
                set<char>vertical;

                for( int j = 0; j < 3; j++ )
                {
                    vertical.insert(s[j].at(i));
                }

                if( result == '?' )
                {
                    if( vertical.size() == 1 && *(vertical.begin()) != '.' )
                    {
                        result = *(vertical.begin());
                    }
                }
            }
        }

        if( result == '?' )
        {
            set<char>left;

            for( int i = 0; i < 3; i++ )
            {
                left.insert(s[i].at(i));
            }

            if( left.size() == 1 && *(left.begin()) != '.' )
            {
                result = *(left.begin());
            }
        }

        if( result == '?' )
        {
            set<char>right;

            right.insert(s[0].at(2));
            right.insert(s[1].at(1));
            right.insert(s[2].at(0));

            if( right.size() == 1 && *(right.begin()) != '.' )
            {
                result = *(right.begin());
            }
        }

        if( result == '?' )
        {
            cout << "DRAW" << endl;
        }
        else
            cout << result << endl;
    }
}

