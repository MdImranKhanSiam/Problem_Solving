#include <bits/stdc++.h>

using namespace std;

void add_edge(map<string,list<string>>&graph,string x, string y)
{
    graph[x].push_back(y);
}

void show_graph(map<string,list<string>>&graph)
{
    for( auto node : graph )
    {
        cout << node.first << " : ";

        for( auto edge : node.second )
            cout << edge << " ";

        cout << endl;
    }
}

void BFS(map<string,list<string>>&graph,string start,vector<string>&store)
{
    map<string,bool>visited;
    queue<string>queuee;

    queuee.push(start);

    visited[start] = true;

    while( !queuee.empty() )
    {
        string node;

        node = queuee.front();

        queuee.pop();

        store.push_back(node);

        for( auto point : graph[node] )
        {
            if( !visited[point] )
            {
                visited[point] = true;

                queuee.push(point);
            }
        }
    }
}

DFS(map<string,list<string>>&graph,string start,vector<string>&store)
{
    map<string,bool>visited;
    stack<string>stackk;

    stackk.push(start);

    visited[start] = true;

    while( !stackk.empty() )
    {
        string node;

        node = stackk.top();

        stackk.pop();

        store.push_back(node);

        for( auto edge : graph[node] )
        {
            if( !visited[edge] )
            {
                visited[edge] = true;

                stackk.push(edge);
            }
        }
    }
}

int main()
{
    map<string,list<string>>Graph;

    cout << "Edges: ";

    int edges;

    cin >> edges;

    for( int i = 0; i < edges; i++ )
    {
        cout << "Add Edge: ";

        string a, b;

        cin >> a >> b;

        add_edge(Graph,a,b);
    }

    cout << endl;

    show_graph(Graph);

    cout << endl;

    int turn = 5;

    while( turn-- )
    {
        cout << "BFS Starting Node: ";

        string bfs_start;

        cin >> bfs_start;

        vector<string>bfs_store;

        BFS(Graph,bfs_start,bfs_store);

        cout << "BFS: ";

        for( auto point : bfs_store )
            cout << point << " ";

        cout << endl;
    }

    turn = 5;

    while( turn-- )
    {
        cout << "DFS Starting Node: ";

        string dfs_start;

        cin >> dfs_start;

        vector<string>dfs_store;

        DFS(Graph,dfs_start,dfs_store);

        cout << "DFS: ";

        for( auto point : dfs_store )
            cout << point << " ";

        cout << endl;
    }
}
