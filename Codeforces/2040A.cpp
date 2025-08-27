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
        int n, k, index;

        cin >> n >> k;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        bool result = false;

        for( int i = 0; i < n; i++ )
        {
            bool check = true;

            for( int j = 0; j < n; j++ )
            {
                if( i != j && ( abs(store[i]-store[j]) % k == 0 ) )
                {
                    check = false;

                    break;
                }
            }

            if( check == true )
            {
                result = true;

                index = i+1;

                break;
            }
        }

        if( result == true )
        {
            cout << "YES" << endl << index << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
