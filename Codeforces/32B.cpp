#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int digit = 0;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        digit++;

        if( digit == 1 && s.at(i) == '.' )
        {
            cout << 0;
            digit = 0;
        }
        else if( digit == 2 && s.at(i) == '.' )
        {
            cout << 1;
            digit = 0;
        }
        else if( digit == 2 && s.at(i) == '-' )
        {
            cout << 2;
            digit = 0;
        }
    }
}
