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

        int maximum = 0, l_max = -1;

        vector<int>num;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            num.push_back(value);

            if( value >= maximum )
            {
                l_max = maximum;
                maximum = value;
            }
            else if( value > l_max )
                l_max = value;


        }

        for( int value : num )
        {
            if( value == maximum )
                cout << maximum - l_max << " ";
            else
                cout << value - maximum << " ";
        }

        cout << endl;
    }
}


