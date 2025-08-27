#include <bits/stdc++.h>

using namespace std;

int Platonic( vector<int>&tree, vector<int>&weight, int current )
{
    int sum = weight[current], previous = weight[current];

    while( current != tree[current] )
    {
        current = tree[current];

        sum += previous = max(weight[current],previous);
    }

    return sum;
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int nodes;

        cin >> nodes;

        vector<int>Tree(1,0), Weight(nodes+1);

        for( int i = 1; i <= nodes; i++ )
        {
            int value;

            cin >> value;

            Weight[i] = value;

            Tree.push_back(i);
        }

        for( int i = 0; i < nodes-1; i++ )
        {
            int parent, child;

            cin >> parent >> child;

            Tree[child] = parent;
        }

        for( int i = 1; i <= nodes; i++ )
        {
            cout << Platonic(Tree,Weight,i) << " ";
        }

        cout << endl;
    }
}
