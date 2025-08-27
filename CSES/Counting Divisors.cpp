#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void Func( vector<int>&divisors, int n )
{
    for( int i = 1; i <= n; i++ )
    {
        for( int j = i; j <= n; j += i )
        {
            divisors[j]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, limit = 1000001;

    cin >> n;

    vector<int>Divisors(limit,0);

    Func(Divisors,limit);

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        cout << Divisors[value] << endl;
    }
}

