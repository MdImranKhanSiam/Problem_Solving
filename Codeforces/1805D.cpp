#include <bits/stdc++.h>

using namespace std;

class DSU{

private:

    int Total_Union;

    vector<int>Parent, Union_Size;

public:

    DSU( int vertices )
    {
        Total_Union = vertices;

        for( int i = 0; i <= vertices; i++ )
        {
            Parent.push_back(i);

            Union_Size.push_back(1);
        }
    }

    void Union( int vertex1, int vertex2 )
    {
        int union1, union2;

        union1 = Find_Union(vertex1);

        union2 = Find_Union(vertex2);

        if( union1 != union2 )
        {
            int first, second;

            if( Union_Size[union1] >= Union_Size[union2] )
            {
                first = union1;

                second = union2;
            }
            else
            {
                first = union2;

                second = union1;
            }

            Parent[second] = first;

            Union_Size[first] += Union_Size[second];

            Union_Size[second] = 0;

            Total_Union--;
        }
    }

    int Find_Union( int vertex )
    {
        int current = vertex;

        while( current != Parent[current] )
        {
            current = Parent[current];
        }

        int root = current;

        while( Parent[vertex] != root )
        {
            int temp = Parent[vertex];

            Parent[vertex] = root;

            vertex = temp;
        }

        return root;
    }

    int Unions()
    {
        return Total_Union;
    }
};

void BFS( vector<vector<int>>&graph, int &point, int vertices, int root )
{
    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    Queue.push(root);

    level[root] = 0;

    visited[root] = 1;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        point = vertex;

        for( auto point : graph[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                level[point] = level[vertex]+1;
            }
        }
    }
}

void BFS( vector<vector<int>>&graph, vector<int>&distance, int root, int vertices )
{
    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    Queue.push(root);

    visited[root] = 1;

    level[root] = 0;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        distance[vertex] = level[vertex];

        for( auto point : graph[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                level[point] = level[vertex]+1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < n-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    int Point1, Point2;

    BFS(Graph,Point1,n,1);

    BFS(Graph,Point2,n,Point1);

    vector<int>Distance_P1(n+1), Distance_P2(n+1);

    BFS(Graph,Distance_P1,Point1,n);

    BFS(Graph,Distance_P2,Point2,n);

    vector<vector<int>>Hashmap_P1(n+1), Hashmap_P2(n+1);

    for( int i = 1; i <= n; i++ )
    {
        Hashmap_P1[Distance_P1[i]].push_back(i);
    }

    for( int i = 1; i <= n; i++ )
    {
        Hashmap_P2[Distance_P2[i]].push_back(i);
    }

    vector<int>result;

    DSU dsu(n);

    for( int i = n; i >= 1; i-- )
    {
        for( auto point : Hashmap_P1[i] )
        {
            dsu.Union(Point1,point);
        }

        for( auto point : Hashmap_P2[i] )
        {
            dsu.Union(Point2,point);
        }

        result.push_back(dsu.Unions());
    }

    for( auto point = result.rbegin(); point != result.rend(); point++ )
    {
        cout << *point << " ";
    }
}
