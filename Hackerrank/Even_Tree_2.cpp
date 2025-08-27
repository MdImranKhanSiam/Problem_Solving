#include <bits/stdc++.h>

using namespace std;

void Set_Weight( vector<int>&graph, vector<int>&weight, int leaf, int root )
{
    int current = leaf, previous = leaf;

    while( current != root )
    {
        current = graph[current];

        weight[current] = weight[current]+weight[previous];

        previous = current;
    }
}

int main()
{
    int vertex, edge;

    cin >> vertex >> edge;

    vector<int>Graph, Weight, Frequency;

    for( int i = 0; i <= vertex; i++ )
    {
        Graph.push_back(i);

        Weight.push_back(1);

        Frequency.push_back(0);
    }

    for( int i = 0; i < edge; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1] = vertex2;

        Frequency[vertex1]++;

        Frequency[vertex2]++;
    }

    for( int i = 1; i <= vertex; i++ )
    {
        if( Frequency[i] == 1 )
        {
            Set_Weight(Graph,Weight,i,1);

            cout << "Leaf: " << i << endl;
        }
    }

    for( int i = 1; i <= vertex; i++ )
    {
        cout << i << " : " << Weight[i] << endl;
    }
}
