#include <iostream>

using namespace std;

int main()
{
    int n, p, q, countt = 0;

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> p >> q;

        if( q - p >= 2 )
            countt++;
    }

    cout << countt << endl;

}
