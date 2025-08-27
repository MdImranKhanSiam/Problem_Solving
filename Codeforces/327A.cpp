#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ones = 0;

    cin >> n;

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        if( value == 1 )
            ones++;

        store.push_back(value);
    }

    int maxed = 0, preflip = 0, postflip = 0, count_one = 0, result;

    for( int i = 1; i < n; i++ )
    {
        for( int j = i-1; j < n-i; j++ )
        {
            if( store[j] == 1 )
                preflip++;
            else
                postflip++;

            for( int k = j+1 ; k < n; k++ )
            {
                if( store[k] == 1 )
                    preflip++;
                else
                    postflip++;

                result = ones-preflip;

                if( (postflip+result) > maxed )
                    maxed = postflip+result;
            }

            preflip = 0;
            postflip = 0;
        }
    }

    if( n == 1 )
    {
        if( store[0] == 0 )
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else if( n == ones )
        cout << n-1 << endl;
    else
        cout << maxed << endl;
}

