#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin >> s;

    vector<int>DNA(85,0);

    for( auto point : s )
    {
        DNA[point]++;
    }

    int Min = INT_MAX, Target;

    for( int i = 65; i <= 84; i++ )
    {
        if( i != 65 && i != 67 && i != 71 && i != 84 )
        {
            continue;
        }

        if( DNA[i] < Min )
        {
            Min = DNA[i];

            Target = i;
        }
    }

    for( int i = 0; i <= Min; i++ )
    {
        char ch = Target;

        cout << ch;
    }

    cout << endl;
}
