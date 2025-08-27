#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string one_line;

    unordered_map<string,string>language;

    while( true )
    {
        getline(cin,one_line);

        if( one_line.empty() )
        {
            break;
        }

        istringstream Read(one_line);

        vector<string>store;

        string word;

        while( Read >> word )
        {
            store.push_back(word);
        }

        language[store[1]] = store[0];

//        cout << "Store 0: " << store[0] << endl;
//
//        cout << "Store 1: " << store[1] << endl;
    }

    string query;

    while( cin >> query )
    {
        if( !language[query].empty() )
        {
            cout << language[query] << endl;
        }
        else
        {
            cout << "eh" << endl;
        }

    }
}
