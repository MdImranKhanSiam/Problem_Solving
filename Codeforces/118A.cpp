#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        s[i] = tolower(s.at(i));

        if( s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' )
        {
            cout << "." << s[i];
        }
    }

    cout << endl;
}
