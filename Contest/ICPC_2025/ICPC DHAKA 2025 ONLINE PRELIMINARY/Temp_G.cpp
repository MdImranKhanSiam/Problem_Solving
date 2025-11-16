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

ll operation( vector<vector<ll>>&matrix, ll n, ll m, vector<ll>&row_danger, vector<ll>&column_danger )
{
    ll total_danger = 0;

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

        total_danger += danger;
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

        total_danger += danger;
    }

    return total_danger;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    ll n, m, total_danger = 0;

    cin >> n >> m;

    vector<vector<ll>>matrix, temp_matrix;

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




//    for( auto point: row_danger )
//    {
//        cout << "Danger: " << point << " ";
//    }
//
//    cout << endl;
//
//    for( auto point: column_danger )
//    {
//        cout << "Danger: " << point << " ";
//    }

//    ll Max = LLONG_MIN;
//
//    pair<ll,ll>position;
//
//    for( int i = 0; i < row_danger.size(); i++ )
//    {
//        if( row_danger[i] > Max )
//        {
//            Max = row_danger[i];
//
//            position.first = i;
//        }
//    }
//
//    Max = LLONG_MIN;
//
//    for( int i = 0; i < column_danger.size(); i++ )
//    {
//        if( column_danger[i] > Max )
//        {
//            Max = column_danger[i];
//
//            position.second = i;
//        }
//    }

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


//    matrix[position.first][position.second] = pow(2,30);

//    matrix[position.first][position.second] = 0;

    for( int i = 0; i < 100; i++ )
    {
        vector<ll>row_danger,column_danger;

        cout << endl << endl;

        ll a, b, value;

        cin >> a >> b >> value;

        temp_matrix = matrix;

        temp_matrix[a][b] = value;

        total_danger = operation(temp_matrix,n,m,row_danger,column_danger);

        cout << "Total Danger: " << total_danger << endl;

        cout << "Danger Row: ";

        for( auto point: row_danger )
        {
            cout << point << " ";
        }

        cout << endl;

        cout << "Danger Column: ";

        for( auto point: column_danger )
        {
            cout << point << " ";
        }


//        cout << position.first << " " << position.second << ": " << row_danger[position.first]+column_danger[position.second] << endl;
    }

}
