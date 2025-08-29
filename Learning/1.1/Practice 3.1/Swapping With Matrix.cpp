#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void swap_row( vector<vector<ll>>&matrix, ll n, ll x, ll y )
{
    for( int i = 1; i <= n; i++ )
    {
        ll temp = matrix[x][i];

        matrix[x][i] = matrix[y][i];

        matrix[y][i] = temp;
    }
}

void swap_column( vector<vector<ll>>&matrix, ll n, ll x, ll y )
{
    for( int i = 1; i <= n; i++ )
    {
        ll temp = matrix[i][x];

        matrix[i][x] = matrix[i][y];

        matrix[i][y] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, x, y;

    cin >> n >> x >> y;

    vector<vector<ll>>matrix(1);

    for( int i = 0; i < n; i++ )
    {
        vector<ll>store(1);

        for( int j = 0; j < n; j++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        matrix.push_back(store);
    }

    swap_row(matrix, n, x, y);

    swap_column(matrix, n, x, y);

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}
