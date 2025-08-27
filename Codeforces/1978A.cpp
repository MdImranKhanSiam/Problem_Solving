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
        int n, Max = INT_MIN, Last;

        cin >> n;

        for( int i = 1; i < n; i++ )
        {
            int value;

            cin >> value;

            if( value > Max )
            {
                Max = value;
            }
        }

        cin >> Last;

        cout << Max+Last << endl;
    }
}

