#include <bits/stdc++.h>

using namespace std;

int main()
{
    string row[3];

    row[0] = "qwertyuiop";
    row[1] = "asdfghjkl;";
    row[2] = "zxcvbnm,./";

    char shift;

    cin >> shift;

    map<char,char>key;

    if( shift == 'R' )
    {
        for( int i = 0; i < 3; i++ )
        {
            for( int j = 0; j < 10; j++ )
            {
                if( j == 0 )
                    key[row[i].at(j)] = row[i].at(j);
                else
                    key[row[i].at(j)] = row[i].at(j-1);
            }
        }
    }
    else
    {
        for( int i = 0; i < 3; i++ )
        {
            for( int j = 0; j < 10; j++ )
            {
                if( j == 9 )
                    key[row[i].at(j)] = row[i].at(j);
                else
                    key[row[i].at(j)] = row[i].at(j+1);
            }
        }
    }

    string s;

    cin >> s;

    for( char ch : s )
        cout << key[ch];

    cout << endl;
}


