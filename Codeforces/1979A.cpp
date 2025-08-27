#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, Min = INT_MAX, previous;

        cin >> n >> previous;

        for( int i = 1; i < n; i++ )
        {
            int value, current;

            cin >> value;

            current = max(previous,value);

            if( current < Min )
            {
                Min = current;
            }

            previous = value;
        }

        cout << Min-1 << endl;
    }
}

