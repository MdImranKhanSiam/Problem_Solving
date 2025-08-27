#include <iostream>

using namespace std;

int main()
{
    int n, h, p, sum = 0;

    cin >> n >> h;

    for( int i = 0; i < n; i++ )
    {
        cin >> p;

        if( p > h )
            sum += 2;
        else
            sum++;
    }

    cout << sum << endl;
}
