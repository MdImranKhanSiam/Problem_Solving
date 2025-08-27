#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int matrix[n][n];

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            int value;

            if( i == 0 || j == 0 )
                value = 1;
            else
                value = matrix[i-1][j]+matrix[i][j-1];

            matrix[i][j] = value;
        }
    }

    cout << matrix[n-1][n-1] << endl;
}


