#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void Insert(vector<pair<ll,ll>>&Tree, ll root, ll vertex )
{
    while( true )
    {
        if( vertex < root )
        {
            if( Tree[root].first == -1 )
            {
                Tree[root].first = vertex;

                break;
            }
            else
            {
                root = Tree[root].first;
            }
        }
        else if( vertex > root )
        {
            if( Tree[root].second == -1 )
            {
                Tree[root].second = vertex;

                break;
            }
            else
            {
                root = Tree[root].second;
            }
        }
    }
}

void Post_Order(vector<pair<ll,ll>>&tree, vector<ll>&traverse, ll root )
{
//    cout << root << endl;

    if( tree[root].first != -1 )
    {
        Post_Order(tree,traverse,tree[root].first);
    }

    if( tree[root].second != -1 )
    {
        Post_Order(tree,traverse,tree[root].second);
    }

    traverse.push_back(root);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<ll>store;

//    ll n;
//
//    cin >> n;
//
//    for( int i = 0; i < n; i++ )
//    {
//        ll value;
//
//        cin >> value;
//
//        store.push_back(value);
//    }

    ll value;

    while( cin >> value )
    {
        store.push_back(value);
    }

    ll vertices = store.size();

    ll root = store[0];

    ll limit = 10005;

    pair<ll,ll>temp = make_pair(-1,-1);


    vector<pair<ll,ll>>Tree(limit+1,temp);

    ll remember_position = -1;

    for( int i = 1; i < vertices; i++ )
    {
        Insert(Tree,root,store[i]);

        remember_position = root;
    }

//    for( int i = 0; i < vertices; i++ )
//    {
//        cout << store[i] << ": " << Tree[store[i]].first << " " << Tree[store[i]].second << endl;
//    }

    vector<ll>Traverse;

    Post_Order(Tree,Traverse,root);

    for( auto point : Traverse )
    {
        cout << point << endl;
    }
}
