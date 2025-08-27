#include <bits/stdc++.h>

using namespace std;

void Cycle( vector<vector<int>>&graph, vector<vector<int>>&lookup, int direction, int &cost )
{
    int start = 1, current = graph[1][direction], previous;

    if( lookup[start][current] == 0 )
    {
        cost += lookup[current][start];
    }

    previous = start;

    while( current != 1 )
    {
        int index;

        if( graph[current][0] == previous )
        {
            index = 1;
        }
        else
        {
            index = 0;
        }

        previous = current;

        current = graph[current][index];

        if( lookup[previous][current] == 0 )
        {
            cost += lookup[current][previous];
        }
    }
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>>Graph(n+1);

    vector<int>length(n+1,0);

    vector<vector<int>>Lookup(n+1,length);

    for( int i = 0; i < n; i++ )
    {
        int vertex1, vertex2, cost;

        cin >> vertex1 >> vertex2 >> cost;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);

        Lookup[vertex1][vertex2] = cost;
    }

    int left_cycle = 0, right_cycle = 1, left_cost = 0, right_cost = 0;

    Cycle(Graph,Lookup,left_cycle,left_cost);

    Cycle(Graph,Lookup,right_cycle,right_cost);

    cout << min(left_cost,right_cost) << endl;
}

