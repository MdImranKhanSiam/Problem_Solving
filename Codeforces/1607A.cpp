#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string letters;

        cin >> letters;

        map<char,int>keyboard;

        for( int i = 0; letters[i] != '\0'; i++ )
            keyboard[letters.at(i)] = i+1;

        string word;

        cin >> word;

        int time = 0;

        for( int i = 1; word[i] != '\0'; i++ )
            time += abs( keyboard[word.at(i-1)]-keyboard[word.at(i)] );

        cout << time << endl;
    }
}

