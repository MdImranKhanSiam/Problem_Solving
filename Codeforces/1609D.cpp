#include <bits/stdc++.h>

using namespace std;

class DSU
{

private:

    vector<int>root, union_size;

    int total_unions, total_vertex, op = 0;

    priority_queue<int>Queue[998];

public:

    DSU( int vertices )
    {
        total_unions = vertices;

        total_vertex = vertices;

        for( int i = 0; i <= vertices; i++ )
        {
            root.push_back(i);

            union_size.push_back(1);
        }
    }

    int Find_Union( int vertex )
    {
        int current = vertex;

        while( current != root[current] )
        {
            current = root[current];
        }

        int top = current, temp;

        while( root[vertex] != top )
        {
            temp = root[vertex];

            root[vertex] = top;

            vertex = temp;
        }

        return top;
    }

    bool Union( int vertex1, int vertex2 )
    {
        bool complete = false;

        int union1, union2;

        union1 = Find_Union(vertex1);

        union2 = Find_Union(vertex2);

        if( union1 != union2 )
        {
            int first, second;

            if( union_size[union1] >= union_size[union2] )
            {
                first = union1;

                second = union2;
            }
            else
            {
                first = union2;

                second = union1;
            }

            root[second] = first;

            union_size[first] += union_size[second];

            union_size[second] = 0;

            total_unions--;

            complete = true;
        }

        for( int i = 1; i <= total_vertex; i++ )
        {
            if( union_size[i] != 0 )
            {
                Queue[op].push(union_size[i]);
            }
        }

        return complete;
    }

    int result( int value )
    {
        int sum = 0;

        for( int i = 0; i < value; i++ )
        {
            sum += Queue[op].top();

            Queue[op].pop();
        }

        op++;

        return sum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, d;

    cin >> n >> d;

    DSU dsu(n);

    int extra = 0;

    for( int i = 0; i < d; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( dsu.Union(vertex1,vertex2) == false )
        {
            extra++;
        }

        cout << dsu.result(extra+1)-1 << "\n";
    }
}

