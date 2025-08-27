#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int found = -1;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        found = s.find("WUB");

        if( found != -1 )
        {
            s.replace(found, 3, " ");

            i = -1;
        }
        else
            break;

        found = -1;
    }

    cout << s << endl;
}
