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

    for( auto point : s )
    {
        if( isalpha(point) )
        {
            char ch;

            if( isupper(point) )
            {
                ch = tolower(point);
            }
            else
            {
                ch = toupper(point);
            }

            cout << ch;
        }
        else
        {
            cout << " ";
        }
    }

    cout << endl;
}
