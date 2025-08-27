#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        unordered_map<int,unordered_map<int,int>>Tree;

        int n, k;

        cin >> n >> k;

        for( int i = 0; i < n-1; i++ )
        {
            int u, v;

            cin >> u >> v;

            Tree[u][v] = 1;

            Tree[v][u] = 1;
        }

        for( int i = 0; i < k; i++ )
        {
            vector<int>store;

            for( auto point : Tree )
            {
                if( point.second.size() == 1 )
                {


                }
            }
        }
    }
}
