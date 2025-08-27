#include <bits/stdc++.h>

using namespace std;

void solve( list<int>l, int sizee )
{
    if( sizee == 1 )
    {
        cout << v[0] << endl;
    }
    else
    {
        int point1 = sizee-1;
        int point2 = point1 - 1;

        int x, y;

        while( true )
        {
            if( (v[point1]+v[point2]) % 2 == 0 )
            {
                x = v[point1];
                y = v[point2];
            }
        }

    }
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        list<int>num;

        for( int i = 1; i <= n; i++ )
            num.push_back(i);

        solve(num, n);
    }
}

