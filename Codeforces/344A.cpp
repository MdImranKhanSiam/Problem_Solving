#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, countt = 1;

    cin >> n;

    if( n == 1 )
        cout << 1 << endl;
    else
    {
        string s, temp;

        cin >> temp;

        for( int i = 0; i < n - 1; i++ )
        {
            cin >> s;

            if( temp != s )
            {
                countt++;
                temp = s;
            }
        }

        cout << countt << endl;
    }
}
