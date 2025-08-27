#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void ways( ll start, ll finish, ll &total )
{
    if( start > finish )
    {
        return;
    }

    if( start == finish )
    {
        total++;

        return;
    }

    ways(start+1,finish,total);

    ways(start+2,finish,total);

    ways(start+3,finish,total);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll start, finish;

    cin >> start >> finish;

    ll total = 0;

    ways(start,finish,total);

    cout << total << endl;
}
