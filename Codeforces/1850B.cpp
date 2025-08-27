#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, better = 0, position;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int speech_length, speech_quality;

            cin >> speech_length >> speech_quality;

            if( speech_length <= 10 )
            {
                if( speech_quality > better )
                {
                    better = speech_quality;
                    position = i+1;
                }
            }
        }

        cout << position << endl;
    }
}

