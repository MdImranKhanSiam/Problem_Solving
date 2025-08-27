#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int maxx = 1;

    for( int i = 0; i < s.size() - 1; i++ )
    {
        if( s[i] == s[i+1] )
        {
            maxx++;

            if( maxx == 7 )
                break;
        }
        else
            maxx = 1;
    }

    if( maxx == 7 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
