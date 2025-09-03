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
        ll n;

        cin >> n;

        deque<ll>A, R;

        for( int i = 1; i <= n; i++ )
        {
            R.push_back(i);
        }

        while( true )
        {
            ll value = R.back();

            R.pop_back();

            A.push_front(value);

            if( R.empty() )
            {
                break;
            }

            value = A.back();

            A.pop_back();

            A.push_front(value);
        }

        cout << A.front();

        A.pop_front();

        while( !A.empty() )
        {
            cout << " " << A.front();

            A.pop_front();
        }

        cout << endl;
    }
}
