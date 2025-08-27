#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll score( vector<vector<ll>>&matrix, ll n, ll k )
{
    ll Score = 0, first = 0;

    for( int i = 0; i < n; i++ )
    {
        ll sum = 0;

        for( int j = 0; j < n; j++ )
        {
            if( i == 0 )
            {
                if( matrix[i][j] > k )
                {
                    first += k;
                }
                else
                {
                    first += matrix[i][j];
                }
            }
            else
            {
                if( matrix[i][j] > k )
                {
                    sum += k;
                }
                else
                {
                    sum += matrix[i][j];
                }

                if( sum > first )
                {
                    Score++;
                }
            }
        }
    }

    return Score;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n;

        cin >> n;

        vector<vector<ll>>matrix;

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

        cout << score(matrix,n,6);


    }
}
