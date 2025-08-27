#include <bits/stdc++.h>

using namespace std;

void traverse( vector<vector<int>>&graph, vector<int>&found, int root )
{
    unordered_map<int,int>visited;

    stack<int>stackk;

    stackk.push(root);

    visited[root] = 1;

    while( !stackk.empty() )
    {
        int node;

        node = stackk.top();

        stackk.pop();

        found[node] = 1;

        for( int value : graph[node] )
        {
            if( visited[value] != 1 )
            {
                stackk.push(value);

                visited[value] = 1;
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

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        vector<vector<int>>Graph(n+1);

        for( int i = 0; i < n-1; i++ )
        {
            for( int j = i+1; j < n; j++ )
            {
                if( store[i] > store[j] )
                {
                    Graph[store[i]].push_back(store[j]);
                    Graph[store[j]].push_back(store[i]);
                }
            }
        }

        vector<int>found(n+1,0);

        int connected_component = 0;

        for( int i = 1; i <= n; i++ )
        {
            if( found[i] != 1 )
            {
                connected_component++;

                found[i] = 1;

                traverse(Graph,found,i);
            }
        }

        cout << connected_component << endl;
    }
}

