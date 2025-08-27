#include <bits/stdc++.h>

using namespace std;

void Height( vector<vector<int>>&tree, int root, int &max_height)
{
    unordered_map<int,int>height_hash, visited;

    stack<int>Stack;

    Stack.push(root);

    visited[root] = 1;

    height_hash[root] = 0;

    max_height = INT_MIN;

    while( !Stack.empty() )
    {
        int node;

        node = Stack.top();

        Stack.pop();

        if( height_hash[node] > max_height )
        {
            max_height = height_hash[node];
        }

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                height_hash[point] = height_hash[node]+1;
            }
        }
    }
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        queue<int>Queue;

        vector<vector<int>>Tree(n+1);

        Queue.push(1);

        int previous;

        for( int i = 0; i < n; i++ )
        {
            int value, parent;

            parent = Queue.front();

            cin >> value;

            if( i == 0 )
            {
                Tree[parent].push_back(value);

                previous = value;

                continue;
            }

            Queue.push(value);

            if( value > previous )
            {
                Tree[parent].push_back(value);

                previous = value;
            }
            else
            {
                Queue.pop();

                parent = Queue.front();

                Tree[parent].push_back(value);

                previous = value;
            }
        }

        int result;

        Height(Tree,1,result);

        cout << result << endl;
    }
}

