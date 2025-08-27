#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double n, k, gap;

        cin >> n >> k;

        double x;

        gap = n - 1;

        cout << fixed << setprecision(0) << (((ceil((k-gap)/gap))*(n-gap))+(k-gap)+n-1) << endl;

    }
}

