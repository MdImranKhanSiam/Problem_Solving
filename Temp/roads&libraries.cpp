#include <bits/stdc++.h>

using namespace std;

int DFS( unordered_map<int,unordered_map<int,int>>&graph, unordered_map<int,int>&unvisited, int start )
{
    unordered_map<int,int>visited;

    stack<int>Stack;

    Stack.push(start);

    visited[start] = 1;

    int nodes = 0;

    while( !Stack.empty() )
    {
        int node;

        node = Stack.top();

        Stack.pop();

        unvisited.erase(node);

        nodes++;

        for( auto point : graph[node] )
        {
            if( visited[point.first] != 1 )
            {
                Stack.push(point.first);

                visited[point.first] = 1;
            }
        }
    }

    return nodes;
}

void Connected_Components( unordered_map<int,unordered_map<int,int>>&graph, vector<int>&connected_components )
{
    unordered_map<int,int>all_unvisited;

    for( auto point : graph )
    {
        all_unvisited[point.first] = 1;
    }

    while( true )
    {
        bool terminate = true;

        int start;

        for( auto point : graph )
        {
            if( all_unvisited[point.first] == 1 )
            {
                terminate = false;

                start = point.first;

                break;
            }
        }

        if( terminate == true )
        {
            break;
        }

        connected_components.push_back(DFS(graph,all_unvisited,start));
    }
}

int main()
{
    int query;

    cin >> query;

    while( query-- )
    {
        unordered_map<int,unordered_map<int,int>>Graph;

        int vertex, edge, library, road;

        cin >> vertex >> edge >> library >> road;

        vector<int>remain(vertex+1,0);

        for( int i = 0; i < edge; i++ )
        {
            int vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            remain[vertex1] = 1;

            remain[vertex2] = 1;

            Graph[vertex1][vertex2] = 1;
            Graph[vertex2][vertex1] = 1;
        }

        int remains = 0;

        for( int i = 1; i <= vertex; i++ )
        {
            if( remain[i] != 1 )
            {
                remains++;
            }
        }

        vector<int>connected_components;

        Connected_Components(Graph,connected_components);

        int cost = 0;

        for( int point : connected_components )
        {
            int road_cost, library_cost;

            road_cost = (point-1)*road;

            library_cost = (point-1)*library;

            if( library_cost > road_cost )
            {
                cost += library+road_cost;
            }
            else
            {
                cost += library+library_cost;
            }
        }

        cout << cost+(remains*library) << endl;
    }
}
