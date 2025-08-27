#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum = 0;

    cin >> n >> m;

    vector<int>price;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        price.push_back(value);
    }

    sort( price.begin(), price.end() );

    for( int value : price )
    {
        if( value < 0 && m != 0 )
        {
            sum += abs(value);
            m--;
        }
        else
            break;
    }

    cout << sum << endl;
}

