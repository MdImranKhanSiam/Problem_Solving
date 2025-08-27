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

        int sum = 0;

        bool odd_check = false, even_check = false;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            sum += value;

            if( value % 2 != 0 )
                odd_check = true;

            if( value % 2 == 0 )
                even_check = true;
        }

        cout <<((sum%2!=0)?"YES":((even_check==false)?"NO":((odd_check==true)?"YES":"NO")))<<endl;
    }
}

