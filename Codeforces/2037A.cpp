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
        int n;

        cin >> n;

        vector<int>Hashmap(n+1,0);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            Hashmap[value]++;
        }

        int result = 0;

        for( int i = 1; i <= n; i++ )
        {
            result += Hashmap[i]/2;
        }

        cout << result << endl;
    }
}
