#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;

    cin >> n >> t;

    int store[n], sum = 0, pointer = 0, digits = 0, max_digits = 0;

    for( int i = 0; i < n; i++ )
    {
        cin >> store[i];

        if( sum + store[i] <= t )
        {
            sum += store[i];
            digits++;

            if( digits > max_digits )
            {
                max_digits = digits;
            }
        }
        else if( sum + store[i] > t )
        {
            sum += store[i] - store[pointer];

            pointer++;
        }
    }

    cout << max_digits << endl;
}

