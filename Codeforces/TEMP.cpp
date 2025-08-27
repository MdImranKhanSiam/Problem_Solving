#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int a = 5, b = 9;

    a = a ^ b;

    b = a ^ b;

    a = a ^ b;

    cout << a << " " << b << endl;
}
