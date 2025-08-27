#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int sizee;

        cin >> sizee;

        int arr[sizee];

        for( int i = 0; i < sizee; i++ )
        {
            cin >> arr[i];
        }

        if( arr[0] != 1 )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
