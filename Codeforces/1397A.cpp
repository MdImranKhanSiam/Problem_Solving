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

        map<char,int>char_count;

        for( int i = 0; i < n; i++ )
        {
            string s;

            cin >> s;

            for( char ch : s )
            {
                if( char_count[ch] == NULL )
                    char_count[ch] = 1;
                else
                    char_count[ch]++;
            }
        }

        map<char,int>::iterator traverse;

        bool check = true;

        for( traverse = char_count.begin(); traverse != char_count.end(); traverse++ )
        {
            if( traverse -> second % n != 0 )
            {
                check = false;
                break;
            }
        }

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}
