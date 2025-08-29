#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    string value;

    unordered_map<string,bool>words;

    vector<string>distinct;

    while( cin >> value )
    {
        vector<string>store;

        string word;

        for( auto point : value )
        {
            if( isalpha(point) )
            {
                word.push_back(tolower(point));
            }
            else
            {
                if( !word.empty() )
                {
                    store.push_back(word);

                    word.clear();
                }
            }
        }

        if( !word.empty() )
        {
            store.push_back(word);
        }

        for( auto point : store )
        {
            if( words[point] != true )
            {
                words[point] = true;

                distinct.push_back(point);
            }
        }
    }

    sort(distinct.begin(),distinct.end());

    for( auto point : distinct )
    {
        cout << point << endl;
    }
}
