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
        int n;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        int Max = -1;

        for( int i = n-1; i >= 0; i-- )
        {
            int value = store[i], previous = 0;

            for( int j = i-1; j >= 0; j-- )
            {
                if( value > store[j] )
                {
                    previous++;
                }
                else
                {
                    break;
                }
            }

            if( previous > Max )
            {
                Max = previous;
            }
        }

        cout << Max << endl;
    }
}
