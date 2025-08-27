#include <bits/stdc++.h>

using namespace std;

struct Tree{
    int data;
    Tree *left;
    Tree *right;
};

Tree *New( int value )
{
    Tree *node = new Tree;

    node->data = value;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

void Insert( Tree *root, int value, int parent, char child )
{
    stack<Tree*>Stack;

    Stack.push(root);

    while( !Stack.empty() )
    {
        Tree *node = Stack.top();

        Stack.pop();

        if( node->data == parent )
        {
            if( child == 'l' )
            {
                node->left = New(value);
            }
            else
            {
                node->right = New(value);
            }

            break;
        }
        else
        {
            if( node->left != nullptr )
                Stack.push(node->left);

            if( node->right != nullptr )
                Stack.push(node->right);

        }
    }
}

vector<int> DFS( Tree *root )
{
    stack<Tree*>Stack;

    vector<int>store;

    if( root != nullptr )
        Stack.push(root);

    while( !Stack.empty() )
    {
        Tree *node;

        node = Stack.top();

        Stack.pop();

        store.push_back(node->data);

        if( node->right != nullptr )
            Stack.push(node->right);

        if( node->right != nullptr )
            Stack.push(node->left);
    }

    return store;
}

int main()
{
    int nodes;

    cout << "Number Of Nodes: ";
    cin >> nodes;

    Tree *root;

    for( int i = 0; i < nodes; i++ )
    {
        int value, p;
        string c;

        if( i == 0 )
        {
            cout << "Root Node: ";
            cin >> value;

            root = New(value);
        }
        else
        {
            cout << "New Node" << endl << endl;
            cout << "Parent: ";
            cin >> p;
            cout << "Left Child/Right Child: ";
            cin >> c;
            cout << "Value: ";
            cin >> value;

            if( c == "left" || c == "l" )
            {
                Insert(root, value, p, 'l');
            }
            else if( c == "right" || c == "r" )
            {
                Insert(root, value, p, 'r');
            }
        }
    }

    vector<int>traversal;

    traversal = DFS(root);

    for( auto i : traversal )
        cout << i << " ";
}
