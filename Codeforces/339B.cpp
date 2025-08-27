#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int h, t;

    cin >> h >> t;

    long long int steps = 0, position = 1, task;

    for( long long int i = 0; i < t; i++ )
    {
        cin >> task;

        if( position <= task )
        {
            steps += task - position;
            position = task;
        }
        else if( position > task )
        {
            steps += ( h - position ) + task;
            position = task;
        }
    }

    cout << steps << endl;
}
