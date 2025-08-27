#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, interval = 0;

    cin >> n;

    for( int i = 0, j = 1; i < n; i++ )
    {
        char ch;

        cin >> ch;

        interval++;

        if( j == interval )
        {
            cout << ch;

            j++;
            interval = 0;
        }
    }

    cout << endl;
}

