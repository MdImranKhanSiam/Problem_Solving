#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int vertex;

        cin >> vertex;

        unordered_map<int,int>exist;

        int negative = 0;

        for( int i = 1; i < vertex; i++ )
        {
            int node[2];

            cin >> node[0] >> node[1];

            for( int j = 0; j < 2; j++ )
            {
                if( exist[node[j]] == NULL )
                    exist[node[j]] = 1;
                else if( exist[node[j]] == 1 )
                {
                    negative++;
                    exist[node[j]] = 2;
                }
            }
        }

        cout << (vertex-negative+1)/2 << endl;
    }
}
