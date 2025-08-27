#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

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

        ll n_squares, n_numbers;

        n_squares = (n*(n+1)*((2*n)+1))/6;

        n_numbers = (n*(n+1))/2;

        ll result = abs(n_squares-pow(n_numbers,2));

        cout << result << endl;
    }
}
