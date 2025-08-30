#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    unordered_map<string,bool>name;

    for( int i = 0; i < n; i++ )
    {
        string s;

        cin >> s;

        if( name[s] != true )
        {
            cout << "NO" << endl;

            name[s] = true;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
