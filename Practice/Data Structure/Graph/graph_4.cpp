#include <bits/stdc++.h>

using namespace std;

void add_edge(map<string,list<string>>&graph,string x, string y)
{
    graph[x].push_back(y);
}

void bfs(map<string,list<string>>&graph,string start,vector<string>&store)
{
    map<string,bool>visited;

    queue<string>queuee;

    queuee.push(start);

    visited[start] = true;

    while( !queuee.empty() )
    {
        string vertex;

        vertex = queuee.front();

        queuee.pop();

        store.push_back(vertex);

        for( auto point : graph[vertex] )
        {
            if( visited[point] != true )
            {
                visited[point] = true;

                queuee.push(point);
            }
        }
    }
}

void show_graph(map<string,list<string>>&graph)
{
    for( auto point : graph )
    {
        cout << point.first << " : ";

        for( auto vertices : point.second )
            cout << vertices << " ";

        cout << endl;
    }
}

int main()
{
    map<string,list<string>>Graph;

    vector<string>store_bfs;

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

    while( true )
    {
        store_bfs.clear();

        cout << "BFS Starting Vertex: ";

        string start_vertex;

        cin >> start_vertex;

        bfs(Graph,start_vertex,store_bfs);

        cout << "BFS: ";

        for( auto point : store_bfs )
            cout << point << " ";

        cout << endl;
    }
}

