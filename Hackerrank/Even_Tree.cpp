#include <bits/stdc++.h>

using namespace std;

void Set_Weight( vector<int>&graph, unordered_map<int,unordered_map<int,int>>&weight, int leaf, int root )
{
    int current = leaf, previous = leaf, previous_weight = 0;

    while( current != root )
    {
        current = graph[current];

        weight[current][previous] += previous_weight;

        previous_weight = weight[current][previous];

        previous = current;
    }
}

int main()
{
    int vertex, edge;

    cin >> vertex >> edge;

    vector<int>Graph;

    for( int i = 0; i <= vertex; i++ )
    {
        Graph.push_back(i);
    }

    unordered_map<int,unordered_map<int,int>>Weight;

    for( int i = 0; i < edge; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1] = vertex2;

        Weight[vertex2][vertex1] = 1;
    }

    //Set_Weight(Graph,Weight,7,1);
    //Set_Weight(Graph,Weight,5,1);
    //Set_Weight(Graph,Weight,4,1);
    Set_Weight(Graph,Weight,9,1);
    Set_Weight(Graph,Weight,10,1);

    for( auto point1 : Weight )
    {
        for( auto point2 : point1.second )
        {
            cout << point1.first << "," << point2.first << " = " << point2.second << endl;
        }
    }
}
