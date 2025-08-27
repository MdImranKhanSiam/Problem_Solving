#include <bits/stdc++.h>

using namespace std;

void K_Length_Cycle( vector<vector<int>>&graph, vector<int>&cycles, vector<int>&found, vector<int>&color, vector<int>&Parent, int vertex, int parent, int target, bool &Terminate )
{
    if( Terminate == true )
    {
        return;
    }

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

        if( store.size() >= target )
        {
            cycles = store;

            Terminate = true;
        }

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

        K_Length_Cycle(graph,cycles,found,color,Parent,point,vertex,target,Terminate);
    }

    color[vertex] = 2;
}

int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    vector<int>Cycle, Found(n+1), Color(n+1), Parent(n+1);

    int target = k+1;

    bool Terminate = false;

    for( int i = 1; i <= n; i++ )
    {
        if( Terminate == true )
        {
            break;
        }

        if( Found[i] != 1 )
        {
            K_Length_Cycle(Graph,Cycle,Found,Color,Parent,i,i,target,Terminate);
        }
    }

    cout << Cycle.size() << endl;

    for( auto point : Cycle )
    {
        cout << point << " ";
    }

    cout << endl;
}
