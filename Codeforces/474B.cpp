#include <bits/stdc++.h>

using namespace std;

int main()
{
    int piles;

    cin >> piles;

    map<int,int>lp;

    int labels = 1;

    for( int i = 1; i <= piles; i++ )
    {
        int value;

        cin >> value;

        for( int j = 0; j < value; j++ )
        {
            lp[labels] = i;

            labels++;
        }
    }

    int targets;

    cin >> targets;

    for( int i = 0; i < targets; i++ )
    {
        int value;

        cin >> value;

        cout << lp[value] << endl;
    }
}

