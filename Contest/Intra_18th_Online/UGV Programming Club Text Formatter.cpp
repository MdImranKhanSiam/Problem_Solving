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

    ll upper = 0, lower = 0;

    for( auto point : s )
    {
        if( isupper(point) )
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if( upper > lower )
    {
        for( auto point : s )
        {
            string ch;

            ch = toupper(point);

            cout << ch;
        }
    }
    else
    {
        for( auto point : s )
        {
            string ch;

            ch = tolower(point);

            cout << ch;
        }
    }

    cout << endl;
}
