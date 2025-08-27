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
        ll a, b, n, result;

        cin >> a >> b >> n;

        if( n == 0 )
        {
            result = a;
        }
        else if( n == 1 )
        {
            result = b;
        }
        else
        {
            vector<ll>store(1);

            for( int i = 1; i <= 3; i++ )
            {
                ll value = b ^ a;

                a = b;

                b = value;

                store.push_back(value);
            }

            if( n == 2 )
            {
                result = store[1];
            }
            else if( n == 3 )
            {
                result = store[2];
            }
            else if( n == 4 )
            {
                result = store[3];
            }
            else
            {
                if( (n-1) % 3 == 0 )
                {
                    result = store[3];
                }
                else
                {
                    result = store[(n-1)%3];
                }
            }
        }

        cout << result << endl;
    }
}
