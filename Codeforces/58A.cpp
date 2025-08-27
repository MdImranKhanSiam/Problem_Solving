#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, cpy;

    cin >> s;

    int h = 0, e = 0, l = 0, o = 0;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        if( s[i] == 'h' && h != 1 )
        {
            cpy += 'h';
            h++;
        }
        else if( s[i] == 'e' && e != 1 && h == 1 )
        {
            cpy += 'e';
            e++;
        }
        else if( s[i] == 'l' && l != 2 && h == 1 && e == 1 )
        {
            cpy += 'l';
            l++;
        }
        else if( s[i] == 'o' && o != 1 && h == 1 && e == 1 && l == 2 )
        {
            cpy += 'o';
            o++;
        }
    }

    if( cpy == "hello" )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
