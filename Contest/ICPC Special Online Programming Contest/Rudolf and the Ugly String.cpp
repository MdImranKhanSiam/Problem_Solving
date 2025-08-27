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
        ll n;

        cin >> n;

        string s;

        cin >> s;

        ll total = 0;

        for( int i = 0; i < n-2; i++ )
        {
            if( (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') || (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') )
            {
                total++;

                i += 2;
            }
        }

        cout << total << endl;
    }
}
