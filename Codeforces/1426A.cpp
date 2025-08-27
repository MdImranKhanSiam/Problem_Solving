#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, x;

        cin >> n >> x;

        int countt = 0, cpy = x;

        if( n <= 2 )
        {
            countt++;
        }
        else if( n < x && n > 2 )
        {
            countt += 2;
        }
        else
        {
            x = 2;
            countt++;

            while( x < n )
            {
                x += cpy;
                countt++;
            }
        }

        cout << countt << endl;
    }
    return 0;
}
