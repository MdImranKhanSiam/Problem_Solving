#include <bits/stdc++.h>
#include <direct.h>
#include <fstream>

using namespace std;

int main()
{
    mkdir("new");

    ofstream input;

    for( int i = 0; i < 3; i++ )
    {
        string s, pass, l;

        cin >> s >> pass;

        l = "new/" + s + ".txt";

        input.open(l);

        input << pass;

        input.close();
    }
}
