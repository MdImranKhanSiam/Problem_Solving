#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void print( ll &value )
{
    if( value == 0 )
    {
        return;
    }

    print(--value);

    cout << "I love Recursion" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    print(n);
}
