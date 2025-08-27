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

        int first = 0, last = 0;

        for( int i = 0, j = s.size()-1; i < 3; i++, j-- )
        {
            first += s.at(i) - 48;
            last += s.at(j) - 48;
        }

        cout << ( (first == last) ? "YES" : "NO" ) << endl;
    }
}
