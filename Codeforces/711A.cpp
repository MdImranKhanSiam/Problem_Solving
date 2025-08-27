#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sizee, flag = 0;

    cin >> sizee;

    string s[sizee];

    for( int i = 0; i < sizee; i++ )
    {
        cin >> s[i];

        if( flag == 0 )
        {
            for( int j = 1; s[i][j] != '\0'; j++ )
            {
                if( s[i][j-1] == 'O' && s[i][j] == 'O' )
                {
                    flag = 1;
                    s[i][j-1] = '+';
                    s[i][j] = '+';
                    break;
                }
            }
        }
    }

    if( flag == 0 )
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for( int i = 0; i < sizee; i++ )
        {
            cout << s[i] << endl;
        }
    }
}
