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

        string s;

        cin >> s;

        int rs = 0, is = 0;

        for( int i = 0; i < n; i++ )
        {
            if( s.at(i) == '(' )
                rs++;
            else if( s.at(i) == ')' && rs > 0 )
                rs--;
            else if( s.at(i) == ')' && rs == 0 )
                is++;
        }

        cout << is << endl;
    }
}

