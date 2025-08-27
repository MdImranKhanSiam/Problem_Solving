#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    double n, s;

    cin >> n >> s;

    ll result = ceil(s/n);

    cout << result << endl;
}
