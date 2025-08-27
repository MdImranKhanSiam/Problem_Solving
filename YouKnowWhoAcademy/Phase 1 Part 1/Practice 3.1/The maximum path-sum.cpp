#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void path( ll n, ll m, vector<vector<ll>>&matrix, ll &Max, ll row, ll column, ll sum )
{
    if( row > n || column > m )
    {
        return;
    }

    //cout << "Matrix[" << row << "][" << column << "] : " << matrix[row][column] << endl;

    sum += matrix[row][column];

    //cout << "Position: " << row << "," << column << ", Sum: " << sum << endl;

    if( row == n && column == m )
    {
        if( sum > Max )
        {
            Max = sum;
        }

        //cout << "Sum: " << sum << endl;

        return;
    }

    path(n,m,matrix,Max,row+1,column,sum);

    path(n,m,matrix,Max,row,column+1,sum);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<vector<ll>>matrix(1);

    for( int i = 0; i < n; i++ )
    {
        vector<ll>temp(1);

        for( int j = 0; j < m; j++ )
        {
            ll value = j;

            cin >> value;

            temp.push_back(value);
        }

        matrix.push_back(temp);
    }

    ll Max_Path = LLONG_MIN;

    path(n,m,matrix,Max_Path,1,1,0);

    cout << Max_Path << endl;
}
