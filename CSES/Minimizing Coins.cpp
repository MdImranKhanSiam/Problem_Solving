#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    vector<int>coins;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        coins.push_back(value);
    }

    sort(coins.begin(),coins.end(),greater<int>());

    stack<int>Stack;

    int sum = 0, point = 0;

    bool result = true;

    while( true )
    {
        Stack.push(coins[point]);

        sum += coins[point];

        if( sum == x )
        {
            break;
        }

        if( sum > x )
        {
            Stack.pop();

            sum -= coins[point];

            point++;

            if( point == n )
            {
                int last = Stack.top();

                Stack.pop();

                sum -= last;

                for( int i = 0; i < n; i++ )
                {
                    if( coins[i] == last )
                    {
                        point = i+1;

                        break;
                    }
                }

                if( point == n )
                {
                    result = false;

                    break;
                }
            }
        }
    }

    if( result == true )
    {
        cout << Stack.size() << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

