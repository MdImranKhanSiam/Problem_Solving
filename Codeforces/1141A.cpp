#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m, remain, result = 0;

    cin >> n >> m;

    if( m % n != 0 )
    {
        cout << -1 << endl;
    }
    else
    {
        remain = m/n;

        while( true )
        {
            if( remain % 3 == 0 )
            {
                remain /= 3;
            }
            else if( remain % 2 == 0 )
            {
                remain /= 2;
            }
            else
            {
                break;
            }

            result++;
        }

        if( remain == 1 )
        {
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
