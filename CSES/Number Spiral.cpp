#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll tc;

    cin >> tc;

    while( tc-- )
    {
        ll row, column;

        cin >> row >> column;

        if( row >= column )
        {
            ll point, diff, result;

            point = ((row-1)*row)+1;

            diff = abs(row-column);

            if( row % 2 == 0 )
            {
                result = point+diff;
            }
            else
            {
                result = point-diff;
            }

            cout << result << "\n";
        }
        else
        {
            ll point, diff, result;

            point = ((column-1)*column)+1;

            diff = column-row;

            if( column % 2 == 0 )
            {
                result = point-diff;
            }
            else
            {
                result = point+diff;
            }

            cout << result << "\n";
        }
    }
}

