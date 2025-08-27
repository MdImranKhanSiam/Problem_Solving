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

        map<int,int>cons;

        map<int,bool>nott;

        for( int i = 0; i < n; i++ )
        {
            int a, x;

            cin >> a >> x;

            if( a == 3 )
                nott[x] = true;
            else
            {
                if( a == 1 )
                {
                    if( cons[a] == NULL || cons[a] < x )
                        cons[a] = x;
                }
                else if( a == 2 )
                {
                    if( cons[a] == NULL || cons[a] > x )
                        cons[a] = x;
                }
            }
        }

        if( cons[2] < cons[1] )
            cout << 0 << endl;
        else if( cons[2] == cons[1] && nott[cons[2]] == NULL )
            cout << 1 << endl;
        else
        {
            int total;

            total = (cons[2]-cons[1])+1;

            map<int,bool>::iterator it;

            for( it = nott.begin(); it != nott.end(); it++ )
            {
                if( it -> first <= cons[2] && it -> first >= cons[1] )
                    total--;
            }

            cout << total << endl;
        }
    }
}


