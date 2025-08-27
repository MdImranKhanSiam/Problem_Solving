#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, c;

        cin >> a >> b >> c;

        if( a + b == c )
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }
}
