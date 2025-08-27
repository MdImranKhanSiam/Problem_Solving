#include <bits/stdc++.h>

using namespace std;

void Prim_MST( unordered_map<int,unordered_map<int,int>>&graph, unordered_map<int,unordered_map<int,int>>&mst, int start, int &Weight )
{
    int edge_target = graph.size()-1, edges = 0;

    unordered_map<int,int>visited;

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>Queue;

    visited[start] = 1;

    for( auto point : graph[start] )
    {
        if( visited[start] == 1 && visited[point.first] == 1 )
        {
            continue;
        }

        Queue.push(make_pair(point.second,make_pair(start,point.first)));
    }

    while( !Queue.empty() && edges < edge_target )
    {
        edges++;

        pair<int,pair<int,int>>current;

        while( true )
        {
            pair<int,pair<int,int>>value;

            value = Queue.top();

            Queue.pop();

            if( visited[value.second.first] == 1 && visited[value.second.second] == 1 )
            {
                continue;
            }

            current = value;

            break;
        }

        int vertex1, vertex2, weight;

        vertex1 = current.second.first;

        vertex2 = current.second.second;

        weight = current.first;

        mst[vertex1][vertex2] = weight;

        mst[vertex2][vertex1] = weight;

        Weight += weight;

        int New;

        if( visited[vertex1] == 1 )
        {
            New = vertex2;
        }
        else
        {
            New = vertex1;
        }

        visited[New] = 1;

        for( auto point : graph[New] )
        {
            if( visited[point.first] != 1 )
            {
                Queue.push(make_pair(point.second,make_pair(New,point.first)));
            }
        }
    }
}

int main()
{
    unordered_map<int,unordered_map<int,int>>Graph, MST;

    int vertex, edge;

    cin >> vertex >> edge;

    for( int i = 0; i < edge; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1][vertex2] = weight;

        Graph[vertex2][vertex1] = weight;
    }

    int start;

    cin >> start;

    int Weight = 0;

    Prim_MST(Graph,MST,start,Weight);

    cout << Weight << endl;
}
