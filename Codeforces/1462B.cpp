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

        string s;

        cin >> s;

        bool check = false;

        if( s.substr(0,4) == "2020" || s.substr(n-4,4) == "2020" )
            check = true;
        else if( s.at(0) == '2' && s.substr(n-3,3) == "020" )
            check = true;
        else if( s.substr(0,2) == "20" && s.substr(n-2,2) == "20" )
            check = true;
        else if( s.substr(0,3) == "202" && s.at(n-1) == '0')
            check = true;

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}

