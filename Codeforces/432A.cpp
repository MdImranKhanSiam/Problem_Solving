#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int>p;

    for( int i = 0; i < n; i++ )
    {
        int value;
        cin >> value;

        p.push_back(value);
    }

    int three = 0, total = 0;

    sort( p.begin(), p.end() );

    for( int i = 0; i < n; i++ )
    {
        if( (5 - p[i]) >= k )
        {
            three++;

            if( three == 3 )
            {
                total++;
                three = 0;
            }
        }
        else
            break;
    }

    cout << total << endl;
}
