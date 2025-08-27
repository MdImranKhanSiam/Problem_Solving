#include <bits/stdc++.h>

using namespace std;

#define int long long int

class DSU{

private:

    int Unions = 0;

    vector<int>Vertex, Length;

public:

    DSU( int vertices )
    {
        Unions = vertices;

        for( int i = 0; i <= vertices; i++ )
        {
            Vertex.push_back(i);

            Length.push_back(1);
        }
    }

    void Union( int vertex1, int vertex2 )
    {
        int union1, union2;

        union1 = Find_Union(vertex1);

        union2 = Find_Union(vertex2);

        if( union1 != union2 )
        {
            if( Length[union1] >= Length[union2] )
            {
                Vertex[union2] = union1;

                Length[union1] += Length[union2];
            }
            else
            {
                Vertex[union1] = union2;

                Length[union2] += Length[union1];
            }

            Unions--;
        }
    }

    int Find_Union( int vertex )
    {
        int current = vertex, key;

        while( current != Vertex[current] )
        {
            current = Vertex[current];
        }

        key = current;

        /*

        while( vertex != Vertex[vertex] )
        {
            int temp = Vertex[vertex];

            Vertex[vertex] = current;

            vertex = temp;
        }

        */

        return key;
    }

    int Total_Unions()
    {
        return Unions;
    }

    void Print_Union()
    {
        int i = 0;

        for( auto point : Vertex )
        {
            cout << i++ << ": " << point << "\n";
        }
    }
};

signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n >> m;

        DSU dsu(n);

        for( int i = 0; i < m; i++ )
        {
            int a, d, k;

            cin >> a >> d >> k;

            for( int j = 1; j <= k; j++ )
            {
                int vertex = a+(j*d);

                dsu.Union(a,vertex);
            }
        }

        cout << dsu.Total_Unions() << "\n";
    }
}
