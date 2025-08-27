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

    string s;

    char ch = '1';

    for( int i = 1; i <= n; i++ )
    {
        s.push_back(ch++);
    }

    cout << s << endl;

    while( next_permutation(s.begin(),s.end()) )
    {
        cout << s << endl;
    }
}
