#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    string pi = "314159265358979323846264338327";

    while( tc-- )
    {
        string s;

        cin >> s;

        int correct = 0;

        for( int i = 0; s[i] != '\0'; i++ )
        {
            if( pi.at(i)==s.at(i) )
                correct++;
            else
                break;
        }

        cout << correct << endl;
    }
}
