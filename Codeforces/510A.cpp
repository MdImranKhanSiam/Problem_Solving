#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, last = 0, first = 1;

    bool flag;

    cin >> n >> m;

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= m; j++ )
        {
            if( i % 2 != 0 )
            {
                cout << "#";
            }
            else
            {
                if( j == m && last == 0 && first == 1 && flag == false )
                {
                    cout << "#";
                    last = 1;
                    first = 0;
                    flag = true;
                }
                else if( j == 1 && first == 0 && last == 1 && flag == false )
                {
                    cout << "#";
                    first = 1;
                    last = 0;
                    flag = true;
                }
                else
                    cout << ".";
            }
        }

        flag = false;

        cout << endl;
    }
}
