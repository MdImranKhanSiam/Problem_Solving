#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int x, y, a, b;

        cin >> x >> y >> a >> b;

        if( b < a*2 )
        {
            long long int first, remain, result;

            first = min(x,y);

            x -= first;
            y -= first;

            remain = max(x,y);

            result = (first*b)+(remain*a);

            cout << result << endl;
        }
        else
        {
            long long int result;

            result = (x+y)*a;

            cout << result << endl;
        }
    }
}

