#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, total = 0;

    cin >> n >> k;

    int value;

    for( int i = 0; i < k; i++ )
    {
        cin >> value;

        if( value != 0 )
            total++;
    }

    int compare;

    for( int i = k; i < n; i++ )
    {
        cin >> compare;

        if( compare != 0 && compare == value )
            total++;
    }

    cout << total << endl;

    return 0;
}
