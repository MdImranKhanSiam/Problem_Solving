#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, value, minn, maxx, amazing = 0;

    cin >> n >> value;

    minn = value;
    maxx = value;
    n--;

    while( n-- )
    {
        cin >> value;

        if( value > maxx )
        {
            amazing++;
            maxx = value;
        }
        else if( value < minn )
        {
            amazing++;
            minn = value;
        }
    }

    cout << amazing << endl;
}
