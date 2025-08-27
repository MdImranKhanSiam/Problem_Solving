#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int start = 1, increase = 1;

    for( int i = 1; i < n; i++ )
    {
        start += increase;

        if( start > n )
        {
            int subtract;

            subtract = max(0,n-(start-increase));

            start = increase-subtract;
        }

        increase++;

        cout << start << " ";
    }

    cout << endl;
}

