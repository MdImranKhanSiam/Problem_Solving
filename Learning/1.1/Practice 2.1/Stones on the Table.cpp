#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, result = 0;

    cin >> n;

    string s;

    cin >> s;

    for( int i = 1; i < n; i++ )
    {
        if( s.at(i-1) == s.at(i) )
        {
            result++;
        }
    }

    cout << result << endl;
}
