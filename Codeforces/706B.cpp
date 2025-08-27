#include <bits/stdc++.h>

using namespace std;

int main()
{
    int shop_size;

    cin >> shop_size;

    vector<int>shop;

    for( int i = 0; i < shop_size; i++ )
    {
        int value;
        cin >> value;

        shop.push_back(value);
    }

    sort( shop.begin(), shop.end() );

    int days, money;

    cin >> days;

    for( int i = 0; i < days; i++ )
    {
        cin >> money;

        if( money < shop[0] )
            cout << 0 << endl;
        else if( money >= shop[shop.size()-1] )
            cout << shop_size << endl;
        else
        {
            auto cap = upper_bound( shop.begin(), shop.end(), money );

            cout << distance( shop.begin(), cap ) << endl;
        }
    }
}
