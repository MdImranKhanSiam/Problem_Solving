#include <bits/stdc++.h>

using namespace std;

void Graph_Coloring( vector<vector<int>>&Graph, unordered_map<int,pair<int,unordered_map<int,int>>>&Color, int &color )
{
    unordered_map<int,int>visited;

    stack<int>Stack;

    Stack.push(1);

    visited[1] = 1;

    Color[1].first = color;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        for( auto point : Graph[node] )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                visited[point] = 1;

                bool new_color = true;

                int found_color;

                for( int i = 1; i <= color; i++ )
                {
                    if( Color[node].first != i && Color[node].second[i] != 1 )
                    {
                        new_color = false;

                        found_color = i;

                        break;
                    }
                }

                if( new_color == true )
                {
                    color++;

                    found_color = color;
                }

                Color[point].first = found_color;

                Color[point].second[Color[node].first] = 1;

                Color[node].second[found_color] = 1;
            }
        }
    }
}

int main()
{
    int nodes;

    cin >> nodes;

    vector<vector<int>>Graph(nodes+1);

    for( int i = 0; i < nodes-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    int color = 1;

    unordered_map<int,pair<int,unordered_map<int,int>>>Color;

    Graph_Coloring(Graph,Color,color);

    cout << color << endl;

    for( int i = 1; i <= nodes; i++ )
    {
        cout << Color[i].first << " ";
    }

    cout << endl;
}

