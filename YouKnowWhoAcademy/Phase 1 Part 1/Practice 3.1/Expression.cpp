#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b, c;

    cin >> a >> b >> c;

    ll result = 0;

    result = max(result,a*b*c);

    result = max(result,a+b+c);

    result = max(result,(a*b)+c);

    result = max(result,a*(b+c));

    result = max(result,(a+b)*c);

    result = max(result,a+(b*c));

    cout << result << endl;
}
