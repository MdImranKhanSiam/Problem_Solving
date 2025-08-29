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
        string bracket;

        cin >> bracket;

        stack<ll>Stack;

        bool result = true;

        for( auto point : bracket )
        {
            if( point == '(' || point == '{' || point == '[' )
            {
                Stack.push(point);
            }
            else
            {
                if( Stack.empty() )
                {
                    result = false;

                    break;
                }

                char current;

                if( point == ')' )
                {
                    current = '(';
                }
                else if( point == '}' )
                {
                    current = '{';
                }
                else if( point == ']' )
                {
                    current = '[';
                }

                char target = Stack.top();

                Stack.pop();

                if( current != target )
                {
                    result = false;

                    break;
                }
            }
        }

        if( Stack.size() != 0 )
        {
            result = false;
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}
