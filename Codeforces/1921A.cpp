#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        set<int>x_axis;

        for( int i = 0; i < 4; i++ )
        {
            int x, y;

            cin >> x >> y;

            x_axis.insert(x);
        }

        vector<int>point;

        for( int value : x_axis )
            point.push_back(value);

        cout << pow(abs(point[0]-point[1]),2) << endl;
    }
}


