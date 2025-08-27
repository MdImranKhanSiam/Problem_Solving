#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        vector<int>a, b;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            a.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            b.push_back(value);
        }

        int s1 = 0, s2 = 0;

        for( int i = 0; i < n-1; i++ )
        {
            if( a[i] >= b[i+1] )
            {
                s1 += a[i];

                s2 += b[i+1];
            }
        }

        s1 += a[n-1];

        cout << s1-s2 << endl;
    }
}
