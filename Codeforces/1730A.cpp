#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, c;

        cin >> n >> c;

        unordered_map<int,int>Hashmap;

        for( int i = 0; i < n; i++ )
        {
            int orbit;

            cin >> orbit;

            Hashmap[orbit]++;
        }

        int cost = 0;

        for( auto point : Hashmap )
        {
            cost += min(point.second,c);
        }

        cout << cost << endl;
    }
}

