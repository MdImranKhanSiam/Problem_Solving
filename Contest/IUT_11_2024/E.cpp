#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>channel;

    for( int i = 0; i < n; i++ )
    {
        string value;

        int input;

        cin >> value;

        if( value == "BLJTV1" )
        {
            input = 1;
        }
        else if( value == "BLJTV2" )
        {
            input = 2;
        }
        else
        {
            input = 0;
        }

        channel.push_back(input);
    }

    int count_1 = 0;

    for( int i = 0; i < n; i++ )
    {
        if( channel[i] == 1 )
        {
            break;
        }
        else
        {
            cout << 1;
            count_1++;
        }
    }

    for( int i = count_1; i > 0; i-- )
    {
        int temp;

        temp = channel[i];
        channel[i] = channel[i-1];
        channel[i-1] = temp;

        cout << 4;
    }

    int count_2 = 0;

    for( int i = 0; i < n; i++ )
    {
        if( channel[i] == 2 )
        {
            break;
        }
        else
        {
            cout << 1;
            count_2++;
        }
    }

    for( int i = 1; i < count_2; i++ )
    {
        cout << 4;
    }
}

