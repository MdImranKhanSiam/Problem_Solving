#include <bits/stdc++.h>

using namespace std;

#define int long long int

void Add_Edge( unordered_map<int,pair<int,vector<int>>>&graph, vector<int>&store, int &countt, int vertex, int vertex1, int vertex2 )
{
    graph[vertex1].second.push_back(vertex2);

    graph[vertex1].first++;

    if( graph[vertex1].first == vertex-1 )
    {
        countt++;
        store.push_back(vertex1);
    }
}

signed main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        unordered_map<int,pair<int,vector<int>>>Graph;

        int n;

        cin >> n;

        vector<int>a, b, strong;

        int total = 0;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            a.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            b.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                if( j == i )
                    continue;

                if( (a[i]-a[j]) >= (b[i]-b[j]) )
                    Add_Edge(Graph, strong, total, n, i+1, j+1);
            }
        }

        cout << total << endl;

        for( auto i : strong )
            cout << i << " ";

        cout << endl;
    }
}
