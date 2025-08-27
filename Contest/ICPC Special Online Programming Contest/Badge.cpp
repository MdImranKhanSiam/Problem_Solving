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

    vector<ll>Backtrack(n+1);

    for( int i = 1; i <= n; i++ )
    {
        ll vertex;

        cin >> vertex;

        Backtrack[i] = vertex;
    }

    for( int i = 1; i <= n; i++ )
    {
        vector<ll>visited(n+1,0);

        ll current = i;

        visited[current]++;

        while( true )
        {
            current = Backtrack[current];

            visited[current]++;

            if( visited[current] == 2 )
            {
                cout << current << " ";

                break;
            }
        }
    }

    cout << endl;
}
