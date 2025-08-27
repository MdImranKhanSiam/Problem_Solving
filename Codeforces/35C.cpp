#include <bits/stdc++.h>

using namespace std;

int get_vertex( int x, int y, int row, int column )
{
    return ((x-1)*column)+y;
}

void get_coordinates( int &x, int &y, int vertex, int column )
{
    x = vertex/column;

    if( vertex % column != 0 )
    {
        x++;
    }

    y = column-((x*column)-vertex);
}

void add_edge( vector<vector<int>>&graph, int vertex1, int vertex2 )
{
    graph[vertex1].push_back(vertex2);

    graph[vertex2].push_back(vertex1);
}

void Modified_BFS( vector<vector<int>>&graph, vector<int>&burning, int vertices, int &Max, int &Vertex, int Limit )
{
    vector<int>visited(vertices+1), level(vertices+1,-1);

    queue<int>Queue;

    for( auto point : burning )
    {
        Queue.push(point);

        level[point] = 0;

        visited[point] = 1;
    }

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        if( level[node] > Max )
        {
            Max = level[node];

            Vertex = node;

            if( Max == Limit )
            {
                break;
            }
        }

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                Queue.push(point);

                visited[point] = 1;

                if( level[point] == -1 )
                {
                    level[point] = level[node]+1;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ifstream Input("input.txt");

    ofstream Output("output.txt");

    int row, column;

    Input >> row >> column;

    int length;

    length = row*column;

    vector<vector<int>>Graph(length+1);

    for( int i = 1; i <= row; i++ )
    {
        for( int j = 1; j <= column; j++ )
        {
            int vertex = get_vertex(i,j,row,column);

            if( j+1 <= column )
            {
                add_edge(Graph,vertex,get_vertex(i,j+1,row,column));
            }

            if( i+1 <= row )
            {
                add_edge(Graph,vertex,get_vertex(i+1,j,row,column));
            }
        }
    }

    vector<int>Burning;

    int k;

    Input >> k;

    for( int i = 0; i < k; i++ )
    {
        int x, y;

        Input >> x >> y;

        Burning.push_back(get_vertex(x,y,row,column));
    }

    int Max = -1, Vertex, Limit = (row-1)+(column-1);

    Modified_BFS(Graph,Burning,length,Max,Vertex,Limit);

    int X, Y;

    get_coordinates(X,Y,Vertex,column);

    Output << X << ' ' << Y << "\n";
}

