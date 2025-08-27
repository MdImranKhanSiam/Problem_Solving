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

    cout << max(min(a,b)*2,(max(a,b)*2)-1) << endl;
}

