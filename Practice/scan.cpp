#include <iostream>

using namespace std;

int main()
{
    int n;

    while( true )
    {
        cin >> n;

        if( n == 0 )
            break;

        int a, b, aa = 0, bb = 0;

        for( int i = 0; i < n; i++ )
        {
            cin >> a >> b;

            if( a > b )
                aa++;
            else if( b > a )
                bb++;
        }

        cout << aa << " " << bb << endl;
    }
}
