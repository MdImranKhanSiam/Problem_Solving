//Concept of tree vertex cut

#include <bits/stdc++.h>

using namespace std;

int Recursive_Cut_Vertex( vector<unordered_map<int,int>>&tree, vector<int>&done, int root )
{
   int leaf = 1, value = 0;

   bool cut = false;

   done[root] = 1;

   for( auto point : tree[root] )
   {
       int vertex = point.first, check = point.second;

       if( done[vertex] == 1 )
       {
           continue;
       }

       if( check == 1 )
       {
           if( value == 1 )
           {
               cut = true;
           }

           value = 0;

           value = Recursive_Cut_Vertex(tree,done,vertex);

           if( value == 2 )
           {
               tree[root][vertex] = 0;

               tree[vertex][root] = 0;

               value = 0;
           }
       }
   }

   if( cut == true )
   {
       value = 1;
   }

   leaf += value;

   return leaf;
}

int Connected_Components( vector<unordered_map<int,int>>&tree, int vertices )
{
    vector<int>found(vertices+1), visited(vertices+1);

    int connected_components = 0, length;

    for( int i = 1; i <= vertices; i++ )
    {
        if( found[i] != 1 )
        {
            length = 0;

            stack<int>Stack;

            Stack.push(i);

            visited[i] = 1;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                length++;

                found[node] = 1;

                for( auto point : tree[node] )
                {
                    if( visited[point.first] == 1 )
                    {
                        continue;
                    }

                    if( point.second == 1 )
                    {
                        Stack.push(point.first);

                        visited[point.first] = 1;
                    }
                }
            }

            if( length > 1 )
            {
                connected_components++;
            }
        }
    }

    return connected_components;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, start = 0;

    cin >> n;

    vector<unordered_map<int,int>>Tree(n+1);

    for( int i = 1; i < n; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( start == 0 )
        {
            start = vertex1;
        }

        Tree[vertex1][vertex2] = 1;

        Tree[vertex2][vertex1] = 1;
    }

    vector<int>done(n+1);

    Recursive_Cut_Vertex(Tree,done,start);

    cout << Connected_Components(Tree,n) << "\n";
}
