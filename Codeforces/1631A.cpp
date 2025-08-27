#include <bits/stdc++.h>

using namespace std;

#define int long long int

int operation( int x[], int y[], int loop, int point )
{
    int maxx_2 = 0;

    for( int i = 0; i < loop; i++ )
    {
        if( i != point )
        {
            if( y[i] >= x[i] )
            {
                if( x[i] > maxx_2 )
                    maxx_2 = x[i];
            }
        }
        else
        {
            if( y[i] > maxx_2 )
                maxx_2 = y[i];
        }
    }

    return maxx_2;
}

main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        bool a_max = false, b_max = false;

        int a[n], b[n];

        int maxx = 0, position;

        for( int i = 0; i < n; i++ )
        {
            cin >> a[i];

            if( a[i] > maxx )
            {
                maxx = a[i];
                position = i;
                a_max = true;
            }
        }

        for( int i = 0; i < n; i++ )
        {
            cin >> b[i];

            if( b[i] > maxx )
            {
                maxx = b[i];
                position = i;
                a_max = false;
                b_max = true;
            }
        }

        int max_2;

        if( a_max == true )
            max_2 = operation(a, b, n, position);
        else if( b_max == true )
            max_2 = operation(b, a, n, position);

        int result = maxx*max_2;

        cout << maxx << endl << max_2 << endl;

        cout << result << endl;
    }
}

