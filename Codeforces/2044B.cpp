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

        int length = s.size();

        for( int i = length-1; i >= 0; i-- )
        {
            if( s.at(i) == 'p' )
            {
                cout << 'q';
            }
            else if( s.at(i) == 'q' )
            {
                cout << 'p';
            }
            else
            {
                cout << 'w';
            }
        }

        cout << endl;
    }
}
