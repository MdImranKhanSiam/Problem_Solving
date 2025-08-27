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
            cin >> matrix[i][j];
        }
    }

    int maxx = INT_MIN;

    for( int i = 1; i < n; i++ )
    {
        for( int j = 1; j < n; j++ )
        {
            int a, b, c, d;

            a = matrix[i-1][j-1];
            b = matrix[i][j];
            c = matrix[i-1][j];
            d = matrix[i][j-1];

            int beauty;

            beauty = (a+b)-(c+d);

            if( beauty > maxx )
            {
                maxx = beauty;
            }
        }
    }

    cout << maxx << endl;
}


