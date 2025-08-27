#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    map<string,int>substrings;

    for( int i = 0; i < n-1; i++ )
    {
        string temp;

        temp = s.substr(i,2);

        if( substrings[temp] == NULL )
            substrings[temp] = 1;
        else
            substrings[temp]++;
    }

    map<string,int>::iterator loop;

    int max_count = 0;
    string two_gram;

    for( loop = substrings.begin(); loop != substrings.end(); loop++ )
    {
        if( loop -> second > max_count )
        {
            max_count = loop -> second;
            two_gram = loop -> first;
        }
    }

    cout << two_gram << endl;
}

