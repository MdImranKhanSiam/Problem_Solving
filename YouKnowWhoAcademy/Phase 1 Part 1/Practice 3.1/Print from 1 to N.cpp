#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void print( ll n, ll incre )
{
    if( incre > n )
    {
        return;
    }

    cout << incre << endl;

    print(n,++incre);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    print(n,1);
}
