#include <bits/stdc++.h>

using namespace std;

void add_edge(map<int,list<int>>&graph,int x, int y)
{
    graph[x].push_back(y);
}

void show_graph(map<int,list<int>>&graph)
{
    for( auto point : graph )
    {
        cout << point.first << " : ";

        for( auto node : point.second )
        {
            cout << node << " ";
        }

        cout << endl;
    }
}

void bfs(map<int,list<int>>&graph, int start, vector<int>&store)
{
    map<int,bool>visited;

    queue<int>queuee;

    queuee.push(start);

    visited[start] = true;

    while( !queuee.empty() )
    {
        int serial;

        serial = queuee.front();

        queuee.pop();

        store.push_back(serial);

        for( auto point : graph[serial] )
        {
            if( visited[point] != true )
            {
                visited[point] = true;

                queuee.push(point);
            }
        }
    }
}

int main()
{
    int edges;

    cin >> edges;

    map<int,list<int>>Graph;

    for( int i = 0; i < edges; i++ )
    {
        int a, b;

        cin >> a >> b;

        add_edge(Graph,a,b);
    }

    cout << endl;

    show_graph(Graph);

    vector<int>store_bfs;

    cout << "Starting Node For BFS: ";

    int start_bfs;

    cin >> start_bfs;

    bfs(Graph,start_bfs,store_bfs);

    cout << "BFS: ";

    for( auto point : store_bfs )
        cout << point << " ";

    cout << endl;
/*
    cout << "Starting Node For DFS: ";

    int start_dfs;

    vector<int>store_dfs;

    cin >> start_dfs;

    dfs(Graph,start_dfs,store_dfs);
*/

}
