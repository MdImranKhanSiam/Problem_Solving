#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll m, n;

    cin >> m >> n;

    unordered_map<string,ll>job;

    for( int i = 0; i < m; i++ )
    {
        string s;

        ll value;

        cin >> s >> value;

        job[s] = value;
    }

    while( n-- )
    {
        ll points = 0;

        string word;

        while( cin >> word )
        {
            if( word == "." )
            {
                break;
            }
            else
            {
                points += job[word];
            }
        }

        cout << points << endl;
    }
}
