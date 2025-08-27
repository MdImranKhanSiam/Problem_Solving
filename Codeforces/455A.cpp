#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[100001];

    set<int>num;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        num.insert(value);

        arr[value]++;
    }

    vector<int>summed;
    map<int,int>num_summed;

    for( int value : num )
    {
        summed.push_back(arr[value]*value);
        num_summed[arr[value]*value] = value;
    }

    sort( summed.begin(), summed.end(), greater<int>() );

    int sum = 0;

    for( int value : summed )
    {
        sum += num_summed[value]*arr[num_summed[value]];

        if( arr[num_summed[value]] != 0 )
            arr[num_summed[value]-1] = arr[num_summed[value]] = arr[num_summed[value]+1] = 0;
    }

    cout << sum << endl;
}
