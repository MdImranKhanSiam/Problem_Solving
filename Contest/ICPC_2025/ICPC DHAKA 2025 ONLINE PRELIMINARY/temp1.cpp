#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void Print( vector<vector<ll>>&matrix, ll n, ll m )
{
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

ll operation( vector<ll>row_danger,column_danger )
{
    for( int i = 0; i < n; i++ )
    {
        ll danger;

        for( int j = 0; j < m; j++ )
        {
            if( j == 0 )
            {
                danger = matrix[i][j];
            }
            else
            {
                danger = danger ^ matrix[i][j];
            }
        }

        row_danger.push_back(danger);
    }

    for( int j = 0; j < m; j++ )
    {
        ll danger;

        for( int i = 0; i < n; i++ )
        {
            if( i == 0 )
            {
                danger = matrix[i][j];
            }
            else
            {
                danger = danger ^ matrix[i][j];
            }
        }

        column_danger.push_back(danger);
    }
}

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<ll>>matrix;

    for( int i = 0; i < n; i++ )
    {
        vector<ll>store;

        for( int j = 0; j < m; j++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        matrix.push_back(store);
    }

    vector<ll>row_danger,column_danger;



    for( auto point: row_danger )
    {
        cout << "Danger: " << point << " ";
    }

    cout << endl;

    for( auto point: column_danger )
    {
        cout << "Danger: " << point << " ";
    }

    ll Max = LLONG_MIN;

    pair<ll,ll>position;

    for( int i = 0; i < row_danger.size(); i++ )
    {
        if( row_danger[i] > Max )
        {
            Max = row_danger[i];

            position.first = i;
        }
    }

    Max = LLONG_MIN;

    for( int i = 0; i < column_danger.size(); i++ )
    {
        if( column_danger[i] > Max )
        {
            Max = column_danger[i];

            position.second = i;
        }
    }

//    for( int i = 0; i < row_danger.size(); i++ )
//    {
//        for( int j = 0; j < column_danger.size(); j++ )
//        {
//            ll current = row_danger[i]+column_danger[j];
//
//            if( current > Max )
//            {
//                Max = current;
//
//                position = make_pair(i,j);
//            }
//        }
//    }


    matrix[i][j] = pow(2,30);

    cout << "Power: " << Power << endl;


    cout << position.first << " " << position.second << ": " << row_danger[position.first]+column_danger[position.second] << endl;
}
