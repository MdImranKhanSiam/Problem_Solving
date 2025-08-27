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
        ll Vertex;

        cin >> Vertex;

        vector<ll>Weight(1), Mark(Vertex+1,0) store;

        for( int i = 0; i < Vertex; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            Weight.push_back(value);
        }

        sort(store.begin(),store.end(),greater<ll>());

        vector<vector<ll>>Tree(Vertex+1);

        for( int i = 0; i < Vertex; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Tree[vertex1].push_back(vertex2);

            Tree[vertex2].push_back(vertex1);
        }



    }
}
