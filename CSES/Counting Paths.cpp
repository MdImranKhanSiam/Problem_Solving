#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

void Modified_BFS( vector<vector<int>>&tree, vector<int>&frequency, vector<int>&parent, vector<int>&visited, int mark, int root, int target )
{
    queue<int>Queue;

    Queue.push(root);

    visited[root] = mark;

    parent[root] = root;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        if( vertex == target )
        {
            int current = vertex;

            frequency[current]++;

            while( current != parent[current] )
            {
                current = parent[current];

                frequency[current]++;
            }

            break;
        }

        for( auto point : tree[vertex] )
        {
            if( visited[point] != mark )
            {
                visited[point] = mark;

                Queue.push(point);

                parent[point] = vertex;
            }
        }
    }
}

int main()
{
    int vertex, path;

    cin >> vertex >> path;

    vector<vector<int>>Tree(vertex+1);

    for( int i = 0; i < vertex-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Tree[vertex1].push_back(vertex2);

        Tree[vertex2].push_back(vertex1);
    }

    vector<int>Frequency(vertex+1,0), Visited(vertex+1,0), Parent(vertex+1);

    int mark_v = 1;

    for( int i = 0; i < path; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Modified_BFS(Tree,Frequency,Parent,Visited,mark_v++,vertex1,vertex2);
    }

    for( int i = 1; i <= vertex; i++ )
    {
        cout << Frequency[i] << " ";
    }

    cout << endl;
}
