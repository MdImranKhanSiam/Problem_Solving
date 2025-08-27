#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void reach( ll n, bool &result, ll current )
{
    if( current > n )
    {
        return;
    }

    if( current == n )
    {
        result = true;
    }

    reach(n,result,current*10);

    reach(n,result,current*20);
}

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

        bool result = false;

        reach(n,result,1);

        if( result == true )
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}
