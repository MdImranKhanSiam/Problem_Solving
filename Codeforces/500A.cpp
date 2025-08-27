#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, target;
    bool check = false;

    cin >> n >> target;

    for( int i = 1; i < n; i++ )
    {
        int value;

        cin >> value;

        if( i == target )
            check = true;
        else if( (i+value) == target )
            check = true;
    }

    cout << ( (check==true) ? "YES" : "NO" ) << endl;
}

