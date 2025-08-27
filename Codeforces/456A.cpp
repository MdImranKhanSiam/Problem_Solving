#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    map<int,int>price_quality;

    vector<int>price;

    for( int i = 0; i < n; i++ )
    {
        int first, second;

        cin >> first >> second;

        price_quality[first] = second;

        price.push_back(first);
    }

    sort( price.begin(), price.end() );

    bool alex = false;

    for( int i = 0; i < n - 1; i++ )
    {
        if( price_quality[price[i]] > price_quality[price[i+1]] )
        {
            alex = true;
            break;
        }
    }

    cout << ((alex==true) ? "Happy Alex" : "Poor Alex") << endl;
}

