#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        bool found = false;

        int length = s.size();

        for( int i = 0; i < length-1; i++ )
        {
            if( s.at(i) == s.at(i+1) )
            {
                found = true;

                break;
            }
        }

        if( found == true )
        {
            cout << 1;
        }
        else
        {
            cout << length;
        }

        cout << endl;
    }
}
