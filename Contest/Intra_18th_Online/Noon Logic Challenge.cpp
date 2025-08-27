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

    if( !isalpha(s[0]+1) )
    {
        if( isupper(s[0]) )
        {
            cout << "A";
        }
        else
        {
            cout << "a";
        }
    }
    else
    {
        cout << ++s[0];
    }

    cout << endl;
}
