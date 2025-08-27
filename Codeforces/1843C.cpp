#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n;

        cin >> n;

        long long int sum = n;

        while( n != 0 )
        {
            sum += n/2;

            n /= 2;
        }

        cout << sum << endl;
    }
}


