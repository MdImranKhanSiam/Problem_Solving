#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n;

    cin >> n;

    unsigned long long int remain, found, moves, i;

    remain = n;
    found = 0;
    moves = 0;

    for( i = 1; i <= n; i++ )
    {
        moves += remain+(found*(remain-1));
        remain--;
        found++;
    }

    cout << moves << endl;
}
