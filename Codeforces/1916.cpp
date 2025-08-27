#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b;

        cin >> a >> b;

        int multi, x = 2;

        while( true )
        {
            bool flag = true;

            multi = b * x;  //1 5

            if( multi % a == 0 ) // 10 / 1
            {
                for( int i = 2; i < multi / 2; i++ )
                {
                    if( multi % i == 0 )
                    {
                        if( i > a )
                        {
                            flag = false;
                            break;
                        }
                    }
                }

                if( flag == true )
                {
                    cout << multi << endl;
                    break;
                }
                else
                    x++;
            }
            else
            {
                x++;
            }

        }
    }
}
