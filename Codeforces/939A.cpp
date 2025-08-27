#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>plane(n+1,-1);

    for( int i = 1; i <= n; i++ )
    {
        int value;

        cin >> value;

        plane[i] = value;
    }

    bool result = false;

    for( int i = 1; i <= n; i++ )
    {
        int target = plane[i];

        for( int j = 0; j < 3; j++ )
        {
            target = plane[target];
        }

        if( target == plane[i] )
        {
            result = true;
            break;
        }
    }

    cout << ( (result==true) ? "YES" : "NO" ) << endl;
}

