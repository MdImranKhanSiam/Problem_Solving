#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

string XOR( string a, string b )
{
    string result = "";

    int n = a.length();

    int m = b.length();

    int len = max(n, m);

    for( int i = 0; i < len; i++ )
    {
        int x = (i < n) ? a[n - i - 1] - '0' : 0;

        int y = (i < m) ? b[m - i - 1] - '0' : 0;

        int z = x ^ y;

        result = (char)(z + '0') + result;
    }

    return result;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s1, Max;

        cin >> s1;

//        for( int i = 0; i < 5000; i++ )
//        {
//            s1.push_back('1');
//        }

        Max.push_back('0');

        int length = s1.size(), Position = 1, Total = 1;

        for( int i = 1; i <= length; i++ )
        {
            for( int j = 1; j <= length-i+1; j++ )
            {
                string s2 = s1.substr(j-1,i), result;

                result = XOR(s1,s2);

                if( result > Max )
                {
                    Max = result;

                    Position = j;

                    Total = i;

                    cout << "Yes" << " ";
                }

                cout << result << " " << s2 << endl;
            }
        }

        cout << "Max: " << Max << endl;

        cout << Position << " " << Position+Total-1 << " ";

        cout << 1 << " " << length << endl;
    }
}
