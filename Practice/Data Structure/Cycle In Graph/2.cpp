//Detect all cycle in a directed disconnected graph

#include <bits/stdc++.h>

using namespace std;

void Cycle( vector<vector<int>>&graph, vector<int>&found, vector<vector<int>>&cycle, vector<int>&color, vector<int>&parent, int vertex, int previous )
{
    found[vertex] = 1;

    if( color[vertex] == 1 )
    {
        vector<int>store;

        int current = previous;

        store.push_back(current);

        while( current != vertex )
        {
            current = parent[current];

            store.push_back(current);


        }

        cycle.push_back(store);

        return;
    }

    parent[vertex] = previous;

    color[vertex] = 1;

    for( auto point : graph[vertex] )
    {
        Cycle(graph,found,cycle,color,parent,point,vertex);
    }

    color[vertex] = 2;
}

void Directed_Cycle( vector<vector<int>>&graph, vector<vector<int>>&cycle, int vertices )
{
    vector<int>Found(vertices+1), color(vertices+1), parent(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( Found[i] != 1 )
        {
            Cycle(graph,Found,cycle,color,parent,i,i);
        }
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);
    }

    vector<vector<int>>Cycle;

    Directed_Cycle(Graph,Cycle,n);

    int total = Cycle.size();

    cout << "Total Cycle: " << total << endl;

    for( int i = 0; i < total; i++ )
    {
        cout << "Cycle " << i+1 << ": ";

        for( auto itr = Cycle[i].rbegin(); itr != Cycle[i].rend(); itr++ )
        {
            cout << *itr << " ";
        }

        cout << endl;
    }
}
