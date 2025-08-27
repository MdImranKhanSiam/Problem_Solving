#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        bool found = false;

        vector<int>store;

        for( int i = 1; i <= n; i++ )
        {
            store.push_back(i);
        }

        for( int i = n-1; i >= 0; i-- )
        {
            vector<int>A;

            for( int j = i; j < n; j++ )
            {
                A.push_back(j+1);
            }

            for( int j = 1; j <= i; j++ )
            {
                A.push_back(j);
            }

            bool result = true;

            for( int i = 0; i < n; i++ )
            {
                int a, b;

                a = A[i]%k;

                b = (i+1)%k;

                if( a == b )
                {
                    result = false;

                    cout << "A: " << a << endl;

                    cout << "B: " << b << endl;

                    break;
                }
            }

            if( result == true )
            {
                for( auto point : A )
                {
                    cout << point << " ";
                }

                found = true;

                break;
            }
        }

        if( found == false )
        {
            cout << -1;
        }

        cout << endl;
    }
}

