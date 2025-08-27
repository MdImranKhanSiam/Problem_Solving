#include <bits/stdc++.h>

using namespace std;

int main()
{
    string position, instruction;

    cin >> position >> instruction;

    int index = 0;

    for( int i = 0; instruction[i] != '\0'; i++ )
    {
        if( position[index] == instruction[i] )
            index++;
    }

    cout << index+1 << endl;
}


