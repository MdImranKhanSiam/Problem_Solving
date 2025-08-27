#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    char maxx = 'a';

    for( char ch : s )
    {
        if( ch > maxx )
            maxx = ch;
    }

    int total = 0;

    for( char ch : s )
    {
        if( ch == maxx )
            total++;
    }

    string ss(total,maxx);

    cout << ss << endl;
}

