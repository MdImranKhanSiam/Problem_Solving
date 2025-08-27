#include <bits/stdc++.h>

using namespace std;

void Construct_Modified_Tree( vector<vector<int>>&graph, vector<int>&tree, int start )
{
    unordered_map<int,int>visited;

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                tree[point] = node;

                visited[point] = 1;

                Queue.push(point);
            }
        }
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1);

    vector<int>Tree;

    for( int i = 0; i <= n; i++ )
    {
        Tree.push_back(i);
    }

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    Construct_Modified_Tree(Graph,Tree,1);

    int paths = 1, current = n;

    bool found = false;

    vector<int>store(1,current);

    while( current != Tree[current] )
    {
        current = Tree[current];

        store.push_back(current);

        paths++;

        if( current == 1 )
        {
            found = true;

            break;
        }
    }

    if( found == true )
    {
        cout << paths << endl;

        for( auto itr = store.rbegin(); itr != store.rend(); itr++ )
        {
            cout << *itr << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    cout << endl;
}
