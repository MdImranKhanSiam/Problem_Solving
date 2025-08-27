#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string code, decoded;

        cin >> code;

        for( int i = n-1; i >= 0; i-- )
        {
            int digit;

            if( code.at(i) == '0' )
            {
                digit = 96+(((code.at(i-2)-48)*10)+(code.at(i-1)-48));
                i -= 2;
            }
            else
            {
                digit = 96+(code.at(i)-48);
            }

            char ch = digit;

            decoded.push_back(ch);
        }

        reverse( decoded.begin(), decoded.end() );

        cout << decoded << endl;
    }
}

