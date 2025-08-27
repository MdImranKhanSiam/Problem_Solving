#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        for( int i = 0; s[i] != '\0'; i += 2 )
        {
            cout << s.at(i);
        }

        cout << s.at(s.size()-1) << endl;
    }
}

