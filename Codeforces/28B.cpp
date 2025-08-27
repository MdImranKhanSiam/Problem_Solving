#include <bits/stdc++.h>

using namespace std;

class DSU{

private:

    int vertices, total_union;

    vector<int>parent, union_size;

public:

    DSU( int value )
    {
        vertices = value;

        total_union = value;

        for( int i = 0; i <= value; i++ )
        {
            parent.push_back(i);

            union_size.push_back(1);
        }
    }

    int Find_Union( int vertex )
    {
        int current = vertex;

        while( current != parent[current] )
        {
            current = parent[current];
        }

        int root = current;

        while( parent[vertex] != root )
        {
            int temp = parent[vertex];

            parent[vertex] = root;

            vertex = temp;
        }

        return root;
    }

    void Union( int vertex1, int vertex2 )
    {
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

            parent[second] = first;

            union_size[first] += union_size[second];

            union_size[second] = 0;

            total_union--;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    DSU dsu(n);

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    for( int i = 1; i <= n; i++ )
    {
        int distance;

        cin >> distance;

        if( i+distance <= n )
        {
            dsu.Union(i,i+distance);
        }

        if( i-distance >= 1 )
        {
            dsu.Union(i,i-distance);
        }
    }

    bool result = true;

    for( int i = 0; i < n; i++ )
    {
        if( dsu.Find_Union(i+1) != dsu.Find_Union(store[i]) )
        {
            result = false;

            break;
        }
    }

    cout << ( (result==true) ? "YES" : "NO" ) << "\n";
}

