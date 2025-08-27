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
        int n, k, total, turn = 2, index;

        cin >> n >> k;

        total = n*n;

        vector<int>diagonal(total+1,0);

        for( int i = 1; i <= n; i++ )
        {
            diagonal[i] = 1;
        }

        index = n+1;

        for( int i = n-1; i >= 1; i-- )
        {
            for( int j = 1; j <= i; j++ )
            {
                diagonal[index++] = turn;
            }

            turn++;

            for( int j = 1; j <= i; j++ )
            {
                diagonal[index++] = turn;
            }

            turn++;
        }

        cout << diagonal[k] << endl;
    }
}

