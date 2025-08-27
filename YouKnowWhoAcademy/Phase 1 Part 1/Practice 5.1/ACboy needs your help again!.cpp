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

        string mode;

        cin >> mode;

        if( mode == "FIFO" )
        {
            queue<ll>Queue;

            while( n-- )
            {
                string op;

                cin >> op;

                if( op == "IN" )
                {
                    ll value;

                    cin >> value;

                    Queue.push(value);
                }
                else if( op == "OUT" )
                {
                    if( !Queue.empty() )
                    {
                        cout << Queue.front() << endl;

                        Queue.pop();
                    }
                    else
                    {
                        cout << "None" << endl;
                    }
                }
            }
        }
        else if( mode == "FILO" )
        {
            stack<ll>Stack;

            while( n-- )
            {
                string op;

                cin >> op;

                if( op == "IN" )
                {
                    ll value;

                    cin >> value;

                    Stack.push(value);
                }
                else if( op == "OUT" )
                {
                    if( !Stack.empty() )
                    {
                        cout << Stack.top() << endl;

                        Stack.pop();
                    }
                    else
                    {
                        cout << "None" << endl;
                    }
                }
            }
        }
    }
}
