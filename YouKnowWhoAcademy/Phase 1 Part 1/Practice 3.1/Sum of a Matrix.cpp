#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void matrix_sum( vector<vector<ll>>&matrix1, vector<vector<ll>>&matrix2, ll n, ll m, ll row, ll column )
{
    if( row == n )
    {
        return;
    }

    ll current = matrix1[row][column]+matrix2[row][column];

    cout << current << " ";

    if( column == m-1 )
    {
        cout << endl;

        row++;

        column = -1;
    }

    matrix_sum(matrix1,matrix2,n,m,row,column+1);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<vector<ll>>matrix1, matrix2;

    for( int i = 0; i < n; i++ )
    {
        vector<ll>store;

        for( int j = 0; j < m; j++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        matrix1.push_back(store);
    }

    for( int i = 0; i < n; i++ )
    {
        vector<ll>store;

        for( int j = 0; j < m; j++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        matrix2.push_back(store);
    }

    matrix_sum(matrix1,matrix2,n,m,0,0);
}
