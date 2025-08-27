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
        int n, k;

        cin >> n >> k;

        int incre1 = n, incre2 = 1, Reset = 1;

        for( int i = n; i >= 1; i-- )
        {
            if( Reset == k )
            {
                cout << incre2++;

                Reset = 1;
            }
            else
            {
                cout << incre1--;

                Reset++;
            }

            cout << " ";
        }

        cout << endl;
    }
}
