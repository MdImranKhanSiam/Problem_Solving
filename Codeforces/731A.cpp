#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int rotation = 0, turns;

    char initial_point = 'a';

    for( int i = 0; s[i] != '\0'; i++ )
    {
        char ch = s.at(i);

        turns = abs(ch-initial_point);

        ( (turns>13) ? rotation += 26-turns : rotation += turns );

        initial_point = ch;
    }

    cout << rotation << endl;
}

