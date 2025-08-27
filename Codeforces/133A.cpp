#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int flag = 0;

    for( int i = 0; i < s.size(); i++ )
    {
        if( s.at(i) == 'H' || s.at(i) == 'Q' || s.at(i) == '9' )
        {
            flag = 1;
            break;
        }
    }

    if( flag == 1 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
