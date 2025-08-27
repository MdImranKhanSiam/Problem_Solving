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

        int sum = 0;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            sum += value;
        }

        int result;

        if( sum < n )
            result = 1;
        else if( sum > n )
            result = sum - n;
        else
            result = 0;

        cout << result << endl;
    }
}


