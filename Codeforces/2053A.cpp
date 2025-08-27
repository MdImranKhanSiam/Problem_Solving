#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool check( int a, int b, int c )
{
    bool result = true;

    if( a+b <= c || a+c <= b || b+c <= a )
    {
        result = false;
    }

    return result;
}

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

        bool result = false;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        for( int i = 0; i < n-1; i++ )
        {
            int value1 = store[i], value2 = store[i+1];

            if( check(value1,value1,value2) && check(value1,value2,value2) )
            {
                result = true;

                break;
            }
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}
