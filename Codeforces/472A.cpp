#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {


        int n;

        cin >> n;

        int a, b, div;

        if( n % 2 == 0 )
        {
            div = n / 2;

            if( div % 2 == 0 )
                a = b = div;
            else
            {
                a = div + 1;
                b = n - a;
            }
        }
        else
        {
            div = n / 2;

            if( div % 2 == 0 )
            {
                a = div;
                b = a + 1;
            }
            else
            {
                a = div - 1;
                b = n - a;
            }
        }

        cout << a << " " << b << endl;

    }
}

