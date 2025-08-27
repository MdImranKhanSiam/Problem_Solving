#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n; cin >> n;

        set<char>solved;

        string s; cin >> s;

        for( char ch : s )
            solved.insert(ch);

        cout << n+solved.size() << endl;
    }
}

