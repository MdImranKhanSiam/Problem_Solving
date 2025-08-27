#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc; cin >> tc;

    while( tc-- )
    {
        int n; cin >> n;

        string s; cin >> s;

        sort( s.begin(), s.end(), greater<char>() );

        cout << s.at(0)-96 << endl;
    }
}

