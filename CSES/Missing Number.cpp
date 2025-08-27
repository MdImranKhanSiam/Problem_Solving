#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int>Hashmap(n+1,0);

    for( int i = 1; i < n; i++ )
    {
        int value;

        cin >> value;

        Hashmap[value] = 1;
    }

    for( int i = 1; i <= n; i++ )
    {
        if( Hashmap[i] == 0 )
        {
            cout << i << "\n";

            break;
        }
    }
}

