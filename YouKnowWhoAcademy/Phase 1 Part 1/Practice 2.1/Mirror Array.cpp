#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<vector<ll>>Matrix;

    for( int i = 0; i < n; i++ )
    {
        vector<ll>temp;

        for( int j = 0; j < m; j++ )
        {
            ll value;

            cin >> value;

            temp.push_back(value);
        }

        Matrix.push_back(temp);
    }

    for( int i = 0; i < n; i++ )
    {
        for( int j = m-1; j >= 0; j-- )
        {
            cout << Matrix[i][j] << " ";
        }

        cout << endl;
    }
}


