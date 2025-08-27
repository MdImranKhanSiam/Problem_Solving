#include <bits/stdc++.h>

using namespace std;

struct tree
{
    int node;
    struct tree *left;
    struct tree *right;
};

int main()
{
    cout << "Number Of Nodes: ";

    int sizee;

    cin >> sizee;

    tree nodes[sizee];

    for( int i = 0; i < sizee; i++ )
    {
        int value, l, r;

        cout << endl << "Add Node " << i << " : " << endl << endl;

        cout << "Value: ";
        cin >> value;

        nodes[i].node = value;

        cout << "Left Node: ";
        cin >> l;

        if( l == -1 )
            nodes[i].left = NULL;
        else
            nodes[i].left = &nodes[l];

        cout << "Right Node: ";
        cin >> r;

        if( r == -1 )
            nodes[i].right = NULL;
        else
            nodes[i].right = &nodes[r];
    }

    cout << endl;

    for( int i = 0; i < sizee; i++ )
    {
        cout << nodes[i].node << " : ";

        if( nodes[i].left == NULL )
            cout << "NULL";
        else
            cout << nodes[i].left->node;

        cout << " ";

        if( nodes[i].right == NULL )
            cout << "NULL";
        else
            cout << nodes[i].right->node;

        cout << endl;
    }
}
