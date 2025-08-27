#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, total = 0;

    cin >> n;

    int one = 0, two = 0, three = 0, four = 0;

    for( int i = 0; i < n; i++ )
    {
        cin >> x;

        switch(x)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        }
    }

    one = one - three;

    if( two > 1 )
    {
        if( two % 2 != 0 )
        {
            one = one - 2;
            two = two / 2;
            two++;
        }
        else
            two = two / 2;
    }
    else if( two == 1 )
    {
        one = one - 2;
    }

    if( one < 0 )
        one = 0;
    else
    {
        if( one % 4 == 0 )
        {
            one = one / 4;
        }
        else
        {
            one = one / 4;
            one++;
        }
    }

    total = four + three + two + one;

    cout << total << endl;
}
