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

        int min_pos, max_pos;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);

            if( value == 1 )
                min_pos = i+1;  3
            else if( value == n )
                max_pos = i+1;  1
        }

        int min_dis, max_dis;
4 3 1 2
        min_dis = min(min_pos,(n-min_pos)+1);
        max_dis = min(max_pos,(n-max_pos)+1);

        int total_dis = 0;

        if( min_dis <= max_dis )
            total_dis += min_dis + min(abs(min_pos-max_pos),max_dis);
        else
            total_dis += max_dis + min(abs(min_pos-max_pos),min_dis);

        cout << total_dis << endl;
    }
}
