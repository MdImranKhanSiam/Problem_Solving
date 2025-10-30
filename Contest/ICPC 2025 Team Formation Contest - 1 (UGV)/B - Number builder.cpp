#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void result( ll first, ll second, ll limit )
{
    bool turn = true;

    while( limit > 0 )
    {
        if( turn )
        {
            turn = false;

            cout << first;

            limit -= first;
        }
        else
        {
            turn = true;

            cout << second;

            limit -= second;
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>one = {1,4,7,10,13,16,19,22,25,28,31,34,37,40};

    bool One = false;

    for( auto point : one )
    {
        if( point == n )
        {
            One = true;

            break;
        }
    }

    if( One )
    {
        result(1,2,n);
    }
    else
    {
        result(2,1,n);
    }
}
