#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        int a, b;

        a = s.at(0)-48;
        b = s.at(2)-48;

        cout << a+b << endl;
    }
}
