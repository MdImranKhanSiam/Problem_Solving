#include <bits/stdc++.h>

using namespace std;

void Prim_MST( vector<vector<pair<int,int>>>&graph, int start, int &cost, int target_edge )
{
    unordered_map<int,int>visited;

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>Queue;

    visited[start] = 1;

    for( auto point : graph[start] )
    {
        Queue.push(make_pair(point.second,make_pair(start,point.first)));
    }

    int edges = 0;

    while( !Queue.empty() && edges != target_edge-1 )
    {
        pair<int,pair<int,int>>current;

        current = Queue.top();

        Queue.pop();

        if( visited[current.second.first] == 1 && visited[current.second.second] == 1 )
        {
            continue;
        }

        edges++;

        cost += current.first;

        int node;

        if( visited[current.second.first] == 1 )
        {
            node = current.second.second;
        }
        else
        {
            node = current.second.first;
        }

        visited[node] = 1;

        for( auto point : graph[node] )
        {
            if( visited[point.first] != 1 )
            {
                Queue.push(make_pair(point.second,make_pair(node,point.first)));
            }
        }
    }

    if( edges != target_edge-1 )
    {
        cost = -1;
    }
}

int main()
{
    int employee, application;

    cin >> employee;

    int max_index, max_value = INT_MIN;

    for( int i = 0; i < employee; i++ )
    {
        int value;

        cin >> value;

        if( value > max_value )
        {
            max_value = value;

            max_index = i+1;
        }
    }

    cin >> application;

    vector<vector<pair<int,int>>>Graph(employee+1);

    vector<int>hashed(employee+1,0);

    int check = 0;

    for( int i = 0; i < application; i++ )
    {
        int supervisor, subordinate, cost;

        cin >> supervisor >> subordinate >> cost;

        hashed[supervisor]++;

        hashed[subordinate]++;

        if( hashed[supervisor] == 1 )
        {
            check++;
        }

        if( hashed[subordinate] == 1 )
        {
            check++;
        }

        Graph[supervisor].push_back(make_pair(subordinate,cost));
    }

    if( employee != 1 && check != employee )
    {
        cout << -1 << endl;

        return 0;
    }

    int Cost = 0;

    Prim_MST(Graph,max_index,Cost,employee);

    cout << Cost << endl;
}
