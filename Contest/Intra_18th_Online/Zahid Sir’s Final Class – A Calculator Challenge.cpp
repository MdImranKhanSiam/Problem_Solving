#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b;

    char op;

    cin >> a >> op >> b;

//    cout << a << endl << op << endl << b;

    if( op == '/' && b == 0 )
    {
        cout << "Division by 0!";
    }
    else if( op == '%' && b == 0 )
    {
        cout << "Modulo by 0!";
    }
    else
    {
        ll result;

        if( op == '+' )
        {
            result = a+b;
        }
        else if( op == '-' )
        {
            result = a-b;
        }
        else if( op == '*' )
        {
            result = a*b;
        }
        else if( op == '/' )
        {
            result = a/b;
        }
        else if( op == '%' )
        {
            result = a%b;
        }

        cout << result;
    }

    cout << endl;
}
