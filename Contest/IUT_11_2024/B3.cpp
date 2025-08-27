#include <bits/stdc++.h>

using namespace std;

#define int long long int

main()
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

    int max_beauty = INT_MIN;

    for( int i = 2; i <= n; i++ )
    {
        for( int j = 0; j < n-(i-1); j++ )
        {
            for( int k = 0; k < n-(i-1); k++ )
            {
                int main_diagonal = 0, other_diagonal = 0, beauty;

                for( int m = 0, n = i-1; m < i; m++, n-- )
                {
                    main_diagonal += matrix[j+m][k+m];
                    other_diagonal += matrix[j+m][k+n];
                }

                beauty = main_diagonal - other_diagonal;

                if( beauty > max_beauty )
                {
                    max_beauty = beauty;
                }
            }
        }
    }

    cout << max_beauty << endl;
}


