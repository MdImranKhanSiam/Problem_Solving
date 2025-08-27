#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        ll length = s.size();

        if( length <= 10 )
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << length-2 << s[length-1] << endl;
        }
    }
}
