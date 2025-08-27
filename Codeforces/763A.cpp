#include <bits/stdc++.h>

using namespace std;

int Find_Roots( vector<vector<int>>&tree, vector<int>&color, int &root1, int &root2 )
{
    bool found = false;

    unordered_map<int,int>visited;

    stack<int>Stack;

    Stack.push(1);

    visited[1] = 1;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                visited[point] = 1;

                if( color[node] != color[point] )
                {
                    root1 = node;

                    root2 = point;

                    found = true;

                    return found;
                }
            }
        }
    }

    return found;
}

int Perfect_Tree( vector<vector<int>>&tree, vector<int>&color, int root )
{
    bool perfect = true;

    unordered_map<int,int>visited;

    stack<int>Stack;

    Stack.push(root);

    visited[root] = 1;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                visited[point] = 1;

                if( (node != root) && (color[node] != color[point]) )
                {
                    perfect = false;

                    return perfect;
                }
            }
        }
    }

    return perfect;
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>>Tree(n+1);

    vector<int>Color(n+1);

    for( int i = 0; i < n-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Tree[vertex1].push_back(vertex2);

        Tree[vertex2].push_back(vertex1);
    }

    for( int i = 1; i <= n; i++ )
    {
        int color;

        cin >> color;

        Color[i] = color;
    }

    int root1, root2, found;

    found = Find_Roots(Tree,Color,root1,root2);

    if( found == 0 )
    {
        cout << "YES" << endl << 1 << endl;
    }
    else
    {
        if( Perfect_Tree(Tree,Color,root1) )
        {
            cout << "YES" << endl << root1 << endl;
        }
        else if( Perfect_Tree(Tree,Color,root2) )
        {
            cout << "YES" << endl << root2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
