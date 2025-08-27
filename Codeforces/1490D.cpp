#include <bits/stdc++.h>

using namespace std;

struct Tree
{
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

void Divide( Tree *&t_root, vector<int>t_store )
{
    int maxx = 0, position = -1, length;

    length = t_store.size();

    for( int i = 0; i < length; i++ )
    {
        if( t_store[i] > maxx )
        {
            maxx = t_store[i];
            position = i;
        }
    }

    vector<int>left, right;

    for( int i = 0; i < position; i++ )
        left.push_back(t_store[i]);

    for( int i = position+1; i < length; i++ )
        right.push_back(t_store[i]);

    t_root = New(maxx);

    if( !left.empty() )
        Divide(t_root->left, left);

    if( !right.empty() )
        Divide(t_root->right, right);
}

int Find( Tree *root, int target, int depth = 0)
{
    if (root == nullptr)
    {
        return -1;
    }

    if (root->data == target)
    {
        return depth;
    }

    int leftDepth = Find(root->left, target, depth + 1);

    if (leftDepth != -1)
    {
        return leftDepth;
    }

    return Find(root->right, target, depth + 1);
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        Tree *root = nullptr;

        Divide(root, store);

        for( auto i : store )
            cout << Find(root, i) << " ";

        cout << endl;
    }
}
