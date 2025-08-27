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
        ll n, x = 0, start = 1;

        cin >> n;

        while( true )
        {
            if( start % 2 != 0 )
            {
                x -= (2*start)-1;
            }
            else
            {
                x += (2*start)-1;
            }

            if( abs(x) >= abs(n) )
            {
                if( start % 2 == 0 )
                {
                    cout << "Sakurako";
                }
                else
                {
                    cout << "Kosuke";
                }

                cout << endl;

                break;
            }

            start++;
        }
    }
}
