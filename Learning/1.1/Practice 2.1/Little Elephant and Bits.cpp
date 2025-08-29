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

    bool zero = false;

    for( int i = 0; i < length-1; i++ )
    {
        if( zero == false && s.at(i) == '0' )
        {
            zero = true;
        }
        else
        {
            cout << s.at(i);
        }
    }

    if( zero == true )
    {
        cout << s.at(length-1);
    }

    cout << endl;
}
