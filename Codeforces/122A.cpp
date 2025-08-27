#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, flag = 0;

    cin >> n;

    if( n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 44 == 0 || n % 77 == 0 || n % 444 == 0 || n % 777 == 0 || n % 447 == 0 || n % 474 == 0 || n % 744 == 0 || n % 477 == 0 || n % 774 == 0 || n % 747 == 0 )
        flag = 1;
    else
    {
        int check = 0;

        string s = to_string(n);

        for( int i = 0; s[i] != '\0'; i++ )
        {
            if( s[i] != '4' && s[i] != '7' )
            {
                check = 1;
            }
        }

        if( check == 0 )
            flag = 1;
    }

    if( flag == 1 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
