#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        int sizee = 4;

        int arr[sizee];

        for( int i = 0; i < sizee; i++ )
        {
            cin >> arr[i];
        }

        int team1, team2, rem[2];

        if( arr[0] > arr[1] )
        {
            team1 = arr[0];
            rem[0] = arr[1];
        }

        else
        {
            team1 = arr[1];
            rem[0] = arr[0];
        }

        if( arr[2] > arr[3] )
        {
            team2 = arr[2];
            rem[1] = arr[3];
        }

        else
        {
            team2 = arr[3];
            rem[1] = arr[2];
        }

        if( rem[0] < rem[1] )
        {
            rem[0] = rem[1];
        }

        if( team1 > team2 )
        {
            team1 = team2;
        }

        if( rem[0] > team1 )
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}
