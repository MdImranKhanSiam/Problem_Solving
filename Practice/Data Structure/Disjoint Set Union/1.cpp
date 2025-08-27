#include <bits/stdc++.h>

using namespace std;

class DSU{

private:
    int connected_components;
    int Size;
    vector<int>Array,Length;

public:
    DSU( int value );

    void Union( int value1, int value2 );

    int Find( int value );

    int Connected_Components();

    int Union_Length( int value );
};

DSU::DSU( int value )
{
    Size = value;

    connected_components = Size;

    for( int i = 0; i < Size; i++ )
    {
        Array.push_back(i);
        Length.push_back(1);
    }
}

void DSU::Union( int value1, int value2 )
{
    int first, second;

    first = Find(value1);

    second = Find(value2);

    if( first != second )
    {
        if( Length[first] > Length[second] )
        {
            Array[second] = first;

            Length[first] += Length[second];
        }
        else
        {
            Array[first] = second;

            Length[second] += Length[first];
        }

        connected_components--;
    }
}

int DSU::Find( int value )
{
    int current = value;

    while( current != Array[current] )
    {
        current = Array[current];
    }

    while( value != current )
    {
        int next = Array[value];

        Array[value] = current;

        value = next;
    }

    return current;
}

int DSU::Connected_Components()
{
    return connected_components;
}

int DSU::Union_Length( int value )
{
    return Length[value];
}

int main()
{
    int nodes, unions;

    cout << "Nodes: ";
    cin >> nodes;

    cout << "Total Unions: ";
    cin >> unions;

    DSU dsu(nodes);

    for( int i = 0; i < unions; i++ )
    {
        int value1, value2;

        cin >> value1 >> value2;

        dsu.Union(value1,value2);
    }

    cout << dsu.Connected_Components() << endl;

    int query;

    cout << "Total Query: ";

    cin >> query;

    for( int i = 0; i < query; i++ )
    {
        int value;

        cin >> value;

        cout << dsu.Find(value) << endl;
    }
}
