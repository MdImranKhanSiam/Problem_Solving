#include <bits/stdc++.h>

using namespace std;

int Connected_Components( vector<unordered_map<int,int>>&forest )
{
    int length = forest.size()-1;

    vector<int>found(length+1,0);

    int total = 0;

    for( int i = 1; i <= length; i++ )
    {
        if( found[i] == 0 )
        {
            total++;

            found[i] = 1;

            unordered_map<int,int>visited;

            stack<int>Stack;

            Stack.push(i);

            visited[i] = 1;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                for( auto point : forest[node] )
                {
                    if( visited[point.first] != 1 )
                    {
                        visited[point.first] = 1;

                        Stack.push(point.first);

                        found[point.first] = 1;
                    }
                }
            }
        }
    }

    return total;
}

int main()
{
    int n;

    cin >> n;

    vector<unordered_map<int,int>>Forest(n+1);

    for( int i = 0; i < n; i++ )
    {
        int distant_vertex;

        cin >> distant_vertex;

        Forest[i+1][distant_vertex];

        Forest[distant_vertex][i+1];
    }

    cout << Connected_Components(Forest) << endl;
}

