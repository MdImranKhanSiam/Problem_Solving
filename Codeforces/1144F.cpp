#include <bits/stdc++.h>

using namespace std;

void Cycle( vector<vector<int>>&graph, vector<int>&mark, vector<int>&previous, bool &odd_cycle, int vertex, int parent )
{
    if( mark[vertex] == 2 )
    {
        return;
    }

    if( mark[vertex] == 1 )
    {
        vector<int>store;

        int current = parent;

        store.push_back(current);

        while( current != vertex )
        {
            current = previous[current];

            store.push_back(current);
        }

        if( store.size() % 2 != 0 )
        {
            odd_cycle = true;
        }

        return;
    }

    mark[vertex] = 1;

    previous[vertex] = parent;

    for( auto point : graph[vertex] )
    {
        if( point == parent )
        {
            continue;
        }

        Cycle(graph,mark,previous,odd_cycle,point,vertex);

        if( odd_cycle == true )
        {
            return;
        }
    }

    mark[vertex] = 2;
}

void Bipartite( vector<vector<int>>&graph, vector<int>&color, int vertices, int start )
{
    vector<int>visited(vertices+1);

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    color[start] = 1;

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        int set_color;

        if( color[node] == 1 )
        {
            set_color = 2;
        }
        else
        {
            set_color = 1;
        }

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                color[point] = set_color;

                visited[point] = 1;

                Queue.push(point);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1);

    vector<pair<int,int>>Input;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);

        Input.push_back(make_pair(vertex1,vertex2));
    }

    vector<int>Mark(n+1,0), Previous(n+1);

    bool odd_cycle = false;

    Cycle( Graph,Mark,Previous,odd_cycle,1,1);

    if( odd_cycle == true )
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";

        vector<int>Color(n+1);

        Bipartite(Graph,Color,n,1);

        for( int i = 0; i < m; i++ )
        {
            int vertex1, vertex2;

            vertex1 = Input[i].first;

            vertex2 = Input[i].second;

            if( Color[vertex1] == 1 )
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }

        cout << "\n";
    }
}

