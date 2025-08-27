#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void BFS_On_Maze( vector<vector<ll>>&graph, vector<ll>&path, ll vertices, ll root, ll target )
{
    vector<ll>visited(vertices+1,0);

    queue<ll>Queue;

    Queue.push(root);

    visited[root] = 1;

    while( !Queue.empty() )
    {
        ll vertex = Queue.front();

        Queue.pop();

        for( auto current : graph[vertex] )
        {
            if( visited[current] != 1 )
            {
                path[current] = vertex;

                visited[current] = 1;

                Queue.push(current);
            }

            if( current == target )
            {
                return;
            }
        }
    }
}

int main()
{
    ll row = 6, column = 5;

    char Maze[row][column] = {
        {'.','.','X','.','.'},
        {'.','.','.','.','F'},
        {'X','.','X','.','.'},
        {'.','.','.','X','.'},
        {'X','X','.','X','X'},
        {'.','S','.','X','.'}
    };

    for( int i = 1; i <= row; i++ )
    {
        for( int j = 1; j <= column; j++ )
        {
            cout << Maze[i-1][j-1] << " ";
        }

        cout << endl;
    }

    ll vertices = row*column;

    vector<vector<ll>>Graph(vertices+1);

    ll start = -1, finish = -1, current = 0;

    vector<pair<ll,ll>>Matrix_Position(vertices+1);

    for( int i = 1; i <= row; i++ )
    {
        for( int j = 1; j <= column; j++ )
        {
            current++;

            Matrix_Position[current] = make_pair(i,j);

            ll bottom_vertex = current+column, right_vertex = current+1;

            if( Maze[i-1][j-1] == 'X' )
            {
                continue;
            }
            else if( Maze[i-1][j-1] == 'S' )
            {
                start = current;
            }
            else if( Maze[i-1][j-1] == 'F' )
            {
                finish = current;
            }

            if( i+1 <= row )
            {
                if( Maze[(i+1)-1][j-1] != 'X' )
                {
                    Graph[current].push_back(bottom_vertex);

                    Graph[bottom_vertex].push_back(current);
                }
            }

            if( j+1 <= column )
            {
                if( Maze[i-1][(j+1)-1] != 'X' )
                {
                    Graph[current].push_back(right_vertex);

                    Graph[right_vertex].push_back(current);
                }
            }
        }
    }

    vector<ll>Path;

    for( int i = 0; i <= vertices; i++ )
    {
        Path.push_back(i);
    }

    BFS_On_Maze(Graph,Path,vertices,start,finish);

    vector<ll>Maze_Path;

    ll traverse = finish;

    Maze_Path.push_back(traverse);

    while( traverse != start )
    {
        traverse = Path[traverse];

        Maze_Path.push_back(traverse);
    }

    for( auto point : Maze_Path )
    {
        if( point == start || point == finish )
        {
            continue;
        }

        pair<ll,ll>value = Matrix_Position[point];

        ll i = value.first, j = value.second;

        Maze[i-1][j-1] = 'O';
    }

    cout << endl << "Solved Maze" << endl << endl;

    for( int i = 1; i <= row; i++ )
    {
        for( int j = 1; j <= column; j++ )
        {
            cout << Maze[i-1][j-1] << " ";
        }

        cout << endl;
    }
}
