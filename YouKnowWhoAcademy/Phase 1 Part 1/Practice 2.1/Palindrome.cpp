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

    ll length = s.size();

    bool check = true;

    for( int i = 0, j = length-1; i < length; i++, j-- )
    {
        if( s.at(i) != s.at(j) )
        {
            check = false;
        }
    }

    cout << ( (check==true) ? "YES" : "NO" ) << endl;
}
