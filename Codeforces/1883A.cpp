#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string num;

        cin >> num;

        int arr[5];

        arr[0] = 1;

        for( int i = 0; i < 4; i++ )
        {
            arr[i+1] = num[i] - 48;
        }

        int sum = 0;

        for( int i = 0; i < 4; i++ )
        {
            if( arr[i] == 0 && arr[i+1] == 0 )
            {
                sum += abs(10-10);
            }
            else if( arr[i] == 0 )
            {
                sum += abs(10-arr[i+1]);
            }
            else if( arr[i+1] == 0 )
            {
                sum += abs(arr[i]-10);
            }

            else
            {
                sum += abs(arr[i]-arr[i+1]);
            }

        }

        cout << sum+4 << endl;
    }

    return 0;
}
