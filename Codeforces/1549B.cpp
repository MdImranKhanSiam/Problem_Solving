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

        string enemy, gregor;

        cin >> enemy >> gregor;

        int greg = 0;

        for( int i = 0; i < n; i++ )
        {
            char value = gregor.at(i);

            if( value == '0' )
                continue;

            if( i == 0 )
            {
                if( enemy[i] == '0' )
                {
                    enemy[i] = '2';
                    greg++;
                }
                else if( enemy[i+1] == '1' )
                {
                    enemy[i+1] = '2';
                    greg++;
                }
            }
            else if( i == n-1 )
            {
                if( enemy[i] == '0' )
                {
                    enemy[i] = '2';
                    greg++;
                }
                else if( enemy[i-1] == '1' )
                {
                    enemy[i-1] = '2';
                    greg++;
                }
            }
            else
            {
                if( enemy[i] == '0' )
                {
                    enemy[i] = '2';
                    greg++;
                }
                else if( enemy[i-1] == '1' )
                {
                    enemy[i-1] = '2';
                    greg++;
                }
                else if( enemy[i+1] == '1' )
                {
                    enemy[i+1] = '2';
                    greg++;
                }
            }
        }

        cout << greg << endl;
    }
}
