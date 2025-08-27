#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin >> s;

    int length = s.size(), click = 0;

    for( int i = 0; i < length; i++ )
    {
        click++;

        if( s.at(i) == '0' )
        {
            if( i+1 < length && s.at(i+1) == '0' )
            {
                i++;
            }
        }
    }

    cout << click << endl;
}
