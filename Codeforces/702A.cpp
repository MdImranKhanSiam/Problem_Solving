#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int sequence = 1, previous, max_sequence = 1;

    cin >> previous;

    for( int i = 1; i < n; i++ )
    {
        int value;

        cin >> value;

        if( value > previous )
        {
            sequence++;

            if( sequence > max_sequence )
                max_sequence = sequence;
        }

        else
            sequence = 1;

        previous = value;
    }

    cout << max_sequence << endl;
}

