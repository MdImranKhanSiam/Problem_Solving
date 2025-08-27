#include <bits/stdc++.h>

using namespace std;

void Detect_Cycle( vector<vector<int>>&graph, vector<vector<int>>&cycles, vector<int>&found, vector<int>&color, vector<int>&Parent, int vertex, int parent )
{
    found[vertex] = 1;

    if ( color[vertex] == 2 )
    {
        return;
    }

    if ( color[vertex] == 1 )
    {
        vector<int>store;

        int current = parent;

        store.push_back(current);

        while ( current != vertex )
        {
            current = Parent[current];

            store.push_back(current);
        }

        cycles.push_back(store);

        return;
    }

    Parent[vertex] = parent;

    color[vertex] = 1;

    for ( auto point : graph[vertex])
    {
        if ( point == Parent[vertex] )
        {
            continue;
        }

        Detect_Cycle(graph,cycles,found,color,Parent,point,vertex);
    }

    color[vertex] = 2;
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1), Cycles;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    vector<int>color(n+1), Parent(n+1), Found(n+1);

    for( int i = 1; i <= n; i++ )
    {
        if( Found[i] != 1 )
        {
            Detect_Cycle(Graph,Cycles,Found,color,Parent,i,i);
        }
    }

    int total_cycle = Cycles.size();

    cout << "Total_Cycle: " << total_cycle << endl;

    for( int i = 0; i < total_cycle; i++ )
    {
        cout << "Cycle " << i+1 << ": ";

        for( auto point : Cycles[i] )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}

