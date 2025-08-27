#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        string c;
        int n, output;

        c = s.at(i);

        n = stoi(c);

        if( n > 4 )
            output = 9-n;
        else
            output = n;

        if( i == 0 && output == 0 )
            output = n;

        cout << output;
    }

    cout << endl;
}

