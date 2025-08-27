#include <bits/stdc++.h>

using namespace std;

void Find_Divisors( int num, vector<int>&store )
{
    int limit = num/2;

    for( int i = 1; i <= limit; i++ )
    {
        if( num % i == 0 )
        {
            store[i] = 1;
        }
    }

    store[num] = 1;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    int a = 0, b = 0;

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);

        if( value > a )
        {
            a = value;
        }
    }

    vector<int>a_divisors(a+1,0);

    Find_Divisors(a,a_divisors);

    for( auto point : store )
    {
        if( a_divisors[point] == 1 )
        {
            a_divisors[point] = 0;
        }
        else if( a_divisors[point] == 0 )
        {
            if( point > b )
            {
                b = point;
            }
        }
    }

    cout << a << " " << b << "\n";
}
