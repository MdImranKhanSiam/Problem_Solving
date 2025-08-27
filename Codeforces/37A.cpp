#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>Count(1001,0);

    int Max = INT_MIN, Total = 0;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        if( Count[value] == 0 )
        {
            Total++;
        }

        Count[value]++;

        if( Count[value] > Max )
        {
            Max = Count[value];
        }
    }

    cout << Max << " " << Total << endl;
}

