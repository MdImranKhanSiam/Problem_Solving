#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s, org = "codeforces";

        cin >> s;

        int wrong = 0;

        for( int i = 0; i < 10; i++ )
            if( s.at(i) != org.at(i) )
                wrong++;

        cout << wrong << endl;
    }
}

