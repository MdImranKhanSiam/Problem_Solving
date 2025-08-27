#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll vertex;

        cin >> vertex;

        vector<vector<ll>>Hashmap;

        vector<ll>Union(vertex+1,0);

        Hashmap.push_back(Union);

        Hashmap[0][1] = 1;

        for( int i = 1; i <= vertex-1; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            bool not_found = true;

            ll length = Hashmap.size();

            for( int j = 0; j < length; j++ )
            {
                if( Hashmap[j][vertex1] == 1 || Hashmap[j][vertex2] == 1 )
                {
                    Hashmap[j][vertex1] = 1;

                    Hashmap[j][vertex2] = 1;

                    not_found = false;

                    break;
                }
            }

            if( not_found )
            {
                Hashmap.push_back(Union);

                Hashmap[length][vertex1] = 1;

                Hashmap[length][vertex2] = 1;
            }
        }

        cout << Hashmap.size() << endl;
    }
}
