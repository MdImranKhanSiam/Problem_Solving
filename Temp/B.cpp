#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<unordered_map<int,int>>Hashmap(n+1);

    int total = 0;

    vector<pair<int,int>>result;

    for( int i = 0; i < n; i++ )
    {
        int vertex, adjacent;

        cin >> vertex;

        string s;

        cin >> s;

        s = s.at(1);

        adjacent = stoi(s);

        int adj_vertex, vertex1, vertex2;

        for( int j = 0; j < adjacent; j++ )
        {
            cin >> adj_vertex;
        }

        if( adjacent == 1 )
        {
            vertex1 = min(vertex,adj_vertex);

            vertex2 = max(vertex,adj_vertex);

            if( Hashmap[vertex1][vertex2] == 1 )
            {
                continue;
            }

            result.push_back(make_pair(vertex1,vertex2));

            total++;

            Hashmap[vertex1][vertex2] = 1;
        }
    }

    cout << total << " critical links" << endl;

    for( auto point : result )
    {
        cout << point.first << " - " << point.second << endl;
    }
}
