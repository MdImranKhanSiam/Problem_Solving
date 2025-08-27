#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    set<char>myset;

    for( char ch : s )
        if( isalpha(ch) )
            myset.insert(ch);

    cout << myset.size() << endl;
}
