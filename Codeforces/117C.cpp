#include <bits/stdc++.h>

using namespace std;

void Cycle( vector<vector<int>>&graph, vector<int>&found, vector<int>&cycle, vector<int>&color, vector<int>&parent, int vertex, int previous, int target, bool &finished )
{
    if( finished == true )
    {
        return;
    }

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

            if( store.size() > target )
            {
                return;
            }
        }

        if( store.size() == target )
        {
            cycle = store;

            finished = true;
        }

        return;
    }

    parent[vertex] = previous;

    color[vertex] = 1;

    for( auto point : graph[vertex] )
    {
        Cycle(graph,found,cycle,color,parent,point,vertex,target,finished);

        if( finished == true )
        {
            return;
        }
    }

    color[vertex] = 2;
}

void Directed_Cycle( vector<vector<int>>&graph, vector<int>&cycle, int vertices, int target )
{
    bool finished = false;

    vector<int>Found(vertices+1), color(vertices+1), parent(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( finished == true )
        {
            break;
        }

        if( Found[i] != 1 )
        {
            Cycle(graph,Found,cycle,color,parent,i,i,target,finished);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<string>Rows;

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < n; i++ )
    {
        string s;

        cin >> s;

        Rows.push_back(s);
    }

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            if( Rows[i][j] == '1' )
            {
                int vertex1, vertex2;

                vertex1 = i+1;

                vertex2 = j+1;

                Graph[vertex1].push_back(vertex2);
            }
        }
    }

    int target = 3;

    vector<int>Cycle;

    Directed_Cycle(Graph,Cycle,n,target);

    if( Cycle.size() == 0 )
    {
        cout << -1 << "\n";
    }
    else
    {
        for( auto itr = Cycle.rbegin(); itr != Cycle.rend(); itr++ )
        {
            cout << *itr << " ";
        }

        cout << "\n";
    }
}
