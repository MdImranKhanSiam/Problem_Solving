#include <bits/stdc++.h>

using namespace std;

struct Tree{
    int data;
    Tree *left = nullptr;
    Tree *right = nullptr;
};

Tree *New( int value )
{
    Tree *node = new Tree;

    node->data = value;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

int main()
{
    int n;

    cout << "Number Of Nodes: ";
    cin >> n;

    Tree *root;

    int num;

    cout << "Root Node: ";
    cin >> num;

    root = New(num);

    queue<Tree*>node;

    for( int i = 0; i < n; i++ )
    {
        cout << "Node " << root->data << " Left Child: ";
        cin >> num;

        root->left = New(num);

        cout << "Node " << root->data << "Right Child: ";
        cin >> num;

        root->right = New(num);
    }
}
