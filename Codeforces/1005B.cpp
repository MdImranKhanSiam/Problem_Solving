#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[2];

    cin >> s[0] >> s[1];

    int size1, size2;

    size1 = s[0].size();
    size2 = s[1].size();

    int point1, point2, match = 0;

    point1 = size1-1;
    point2 = size2-1;

    for( int i = 0; i < size1 && i < size2; i++ )
    {
        if( s[0].at(point1) != s[1].at(point2) )
            break;
        else
            match++;

        point1--;
        point2--;
    }

    cout << (size1-match)+(size2-match) << endl;
}

