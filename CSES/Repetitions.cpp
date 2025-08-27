#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin >> s;

    int length = s.size(), Max = 1, start = 1;

    for( int i = 0; i < length-1; i++ )
    {
        if( s.at(i) == s.at(i+1) )
        {
            start++;
        }
        else
        {
            start = 1;
        }

        if( start > Max )
        {
            Max = start;
        }
    }

    cout << Max << "\n";
}

