#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    set<char>letter;

    for( char ch : s )
        letter.insert(tolower(ch));

    if( letter.size() == 26 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
