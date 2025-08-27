#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << max(0,(b-a)+1) << endl;
}
