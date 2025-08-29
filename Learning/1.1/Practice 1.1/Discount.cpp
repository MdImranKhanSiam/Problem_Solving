#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    double a, b, result;

    cin >> a >> b;

    result = (a-b)*(100.0/a);

    cout << result << endl;
}
