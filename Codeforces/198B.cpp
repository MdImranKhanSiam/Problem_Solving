#include <bits/stdc++.h>

using namespace std;

void Modified_BFS( vector<unordered_map<int,int>>&graph, vector<int>&tree, unordered_map<int,int>&targets, vector<pair<int,int>>&store )
{
    unordered_map<int,int>visited;

    queue<int>Queue;

    unordered_map<int,int>depth;

    Queue.push(1);

    visited[1] = 1;

    depth[1] = 1;

    while( !Queue.empty() )
    {
        int node = Queue.front();

        //cout << "Visit: " << node << endl;

        Queue.pop();

        for( auto point : graph[node] )
        {
            if( visited[point.first] != 1 )
            {
                depth[point.first] = depth[node]+1;

                if( targets[point.first] == 1 )
                {
                    store.push_back(make_pair(point.first,depth[point.first]));
                }

                visited[point.first] = 1;

                Queue.push(point.first);

                tree[point.first] = node;
            }
        }
    }
}

bool check( vector<int>&tree, int leaf, int level, int n )
{
    if( level > n )
    {
        return false;
    }

    int current = leaf;

    while( current != 1 )
    {
        if( current < level )
        {
            return false;
        }

        current = tree[current];
    }

    return true;
}

int main()
{
    int n, k;

    cin >> n >> k;

    string left, right;

    cin >> left >> right;

    string left_add(k,'-'), right_add(k,'-');

    left.append(left_add);

    right.append(right_add);

    int actual_n = n+k;

    int length = actual_n*2;

    unordered_map<int,int>Targets;

    for( int i = n+1; i <= n+k; i++ )
    {
        Targets[i] = 1;
    }

    for( int i = actual_n+n+1; i <= actual_n+n+k; i++ )
    {
        Targets[i] = 1;
    }

    vector<unordered_map<int,int>>Graph(length+1);

    for( int i = 1; i < actual_n; i++ )
    {
        if( left.at(i-1) != 'X' )
        {
            if( left.at(i) != 'X' && i <= n )
            {
                Graph[i][i+1] = 1;

                Graph[i+1][i] = 1;
            }

            if( i+k <= actual_n )
            {
                if( right.at(i+k-1) != 'X' )
                {
                    Graph[i][actual_n+i+k] = 1;
                }
            }
        }

        if( right.at(i-1) != 'X' )
        {
            if( right.at(i) != 'X' && i <= n )
            {
                Graph[actual_n+i][actual_n+i+1] = 1;

                Graph[actual_n+i+1][actual_n+i] = 1;
            }

            if( i+k <= actual_n )
            {
                if( left.at(i+k-1) != 'X' )
                {
                    Graph[actual_n+i][i+k] = 1;
                }
            }
        }
    }

    vector<int>Tree;

    for( int i = 0; i <= length; i++ )
    {
        Tree.push_back(i);
    }

    /*cout << "Targets: ";

    for( auto point : Targets )
    {
        cout << point.first << " ";
    }

    cout << endl;*/

    /*for( int i = 1; i <= length; i++ )
    {
        cout << i << " : ";

        for( auto point : Graph[i] )
        {
            cout << point.first << " ";
        }

        cout << endl;
    }*/

    /*cout << endl << endl;

    for( auto point : Tree )
    {
        cout << point << endl;
    }*/

    vector<pair<int,int>>Store;

    Modified_BFS(Graph,Tree,Targets,Store);

    /*for( int i = 0; i <= length; i++ )
    {
        cout << i << " : " << Tree[i] << endl;
    }*/

    bool ans = false;

    for( auto point : Store )
    {
        if( check(Tree,point.first,point.second,n) == true )
        {
            ans = true;

            break;
        }
    }

    if( ans == true )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

