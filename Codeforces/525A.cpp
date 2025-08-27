#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    map<char,int>door;

    door[toupper(s.at(0))] = 1;

    int buy = 0, range = (n*2)-3;

    for( int i = 0, j = 1; i < n; i++, j += 2 )
    {
        if( door[s.at(j)] == NULL )
            door[s.at(j)] = 0;

        if( door[s.at(j)] == 0 )
            buy++;
        else
            door[s.at(j)]--;

        if( j == range )
            break;

        door[toupper(s.at(j+1))]++;
    }

    cout << buy << endl;
}

