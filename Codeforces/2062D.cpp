#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void DFS( vector<vector<ll>>&tree, ll vertices, vector<ll>&visited, vector<pair<ll,ll>>&weight_range, vector<ll>&weight, ll parent, ll vertex )
{
    ll Max = LLONG_MIN;

    bool leaf = true;

    for( auto point : tree[vertex] )
    {
        if( point == parent )
        {
            continue;
        }

        if( visited[point] != 1 )
        {
            leaf = false;

            DFS(tree,vertices,visited,weight_range,weight,vertex,point);

            if( weight[point] > Max )
            {
                Max = weight[point];
            }
        }
    }

    visited[vertex] = 1;

    if( leaf == true )
    {
        weight[vertex] = weight_range[vertex].first;
    }
    else
    {
        ll value;

        if( Max <= weight_range[vertex].first )
        {
            value = weight_range[vertex].first;
        }
        else if( Max >= weight_range[vertex].second )
        {
            value = weight_range[vertex].second;
        }
        else
        {
            value = Max;
        }

        weight[vertex] = value;
    }
}

void DFS( vector<vector<ll>>&tree, ll vertices, vector<ll>&visited, vector<ll>&weight, ll &diff, ll parent, ll vertex )
{
    for( auto point : tree[vertex] )
    {
        if( point == parent )
        {
            continue;
        }

        if( visited[point] != 1 )
        {
            DFS(tree,vertices,visited,weight,diff,vertex,point);
        }
    }

    visited[vertex] = 1;

    ll vertex_weight = weight[vertex], parent_weight = weight[parent];

    if( vertex_weight > parent_weight )
    {
        diff += vertex_weight-parent_weight;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll Vertex;

        cin >> Vertex;

        vector<pair<ll,ll>>Weight_Range(Vertex+1);

        for( int i = 1; i <= Vertex; i++ )
        {
            ll weight1, weight2;

            cin >> weight1 >> weight2;

            Weight_Range[i] = make_pair(weight1,weight2);
        }

        vector<vector<ll>>Tree(Vertex+1);

        for( int i = 0; i < Vertex-1; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Tree[vertex1].push_back(vertex2);

            Tree[vertex2].push_back(vertex1);
        }

        vector<ll>Weight(Vertex+1,-1), Visited(Vertex+1,0), Visited2(Vertex+1,0);

        DFS(Tree,Vertex,Visited,Weight_Range,Weight,1,1);

        ll result = Weight[1], Difference = 0;

        DFS(Tree,Vertex,Visited2,Weight,Difference,1,1);

        cout << result+Difference << endl;
    }
}
