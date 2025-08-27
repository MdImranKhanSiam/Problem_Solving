#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        float n;

        cin >> n;

        if( n / 3 == floor(n/3) )
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    return 0;
}
