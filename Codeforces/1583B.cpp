#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n >> m;

        int center;

        unordered_map<int,bool>obstacle;

        for( int i = 0; i < m; i++ )
        {
            int a, b, c;

            cin >> a >> b >> c;

            obstacle[b] = true;
        }

        for( int i = 1; i <= n; i++ )
        {
            if( obstacle[i] == NULL )
            {
                center = i;
                break;
            }
        }

        for( int i = 1; i <= n; i++ )
        {
            if( i != center )
                cout << center << " " << i << endl;
        }
    }
}
