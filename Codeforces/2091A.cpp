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
        int n, Count = 0, ans = 0;

        cin >> n;

        vector<int>Hashmap(10,-1);

        Hashmap[0] = 3;

        Hashmap[1] = 1;

        Hashmap[2] = 2;

        Hashmap[3] = 1;

        Hashmap[5] = 1;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( Hashmap[value] > 0 )
            {
                Hashmap[value]--;

                Count++;
            }

            if( Count == 8 && ans == 0 )
            {
                ans = i+1;
            }
        }

        cout << ans << endl;
    }
}
