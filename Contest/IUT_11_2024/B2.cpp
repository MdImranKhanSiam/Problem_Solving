#include <bits/stdc++.h>

using namespace std;

#define int long long int

main()
{
    int n = 400;

    //cin >> n;

    int matrix[n][n];

    int total = 0, incre = 1;

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            //cin >> matrix[i][j];

            matrix[i][j] = incre++;
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

                for( int m = 0; m < i; m++ )
                {
                    main_diagonal += matrix[j+m][k+m];

                    total++;
                }

                for( int n = i-1, l = 0; n >= 0; n--, l++ )
                {
                    other_diagonal += matrix[j+l][k+n];

                    total++;
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
    cout << "Total: " << total << endl;
}

