#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<vector<ll>>matrix;

    ll n = 6;

    for( int i = 0; i < n; i++ )
    {
        vector<ll>temp;

        for( int j = 0; j < n; j++ )
        {
            ll value;

            cin >> value;

            temp.push_back(value);
        }

        matrix.push_back(temp);
    }

    ll Max = LLONG_MIN;

    for( int i = 0; i < n-2; i++ )
    {
        for( int j = 0; j < n-2; j++ )
        {
            ll sum = 0;

            sum += matrix[i][j];

            sum += matrix[i][j+1];

            sum += matrix[i][j+2];

            sum += matrix[i+1][j+1];

            sum += matrix[i+2][j];

            sum += matrix[i+2][j+1];

            sum += matrix[i+2][j+2];

            Max = max(Max,sum);
        }
    }

    cout << Max << endl;
}
