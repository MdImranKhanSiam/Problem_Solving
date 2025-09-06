#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<string>directory;

    while( n-- )
    {
        string op;

        cin >> op;

        if( op == "pwd" )
        {
            cout << "/";

            for( auto point : directory )
            {
                cout << point << "/";
            }

            cout << endl;
        }
        else if( op == "cd" )
        {
            string path;

            cin >> path;

            if( path[0] == '/' )
            {
                directory.clear();
            }

            ll length = path.size();

            for( int i = 0; i < length; i++ )
            {
                if( path.at(i) == '/' )
                {
                    path[i] = ' ';
                }
            }

            istringstream read(path);

            string word;

            while( read >> word )
            {
                if( word == ".." )
                {
                    if( directory.size() > 0 )
                    {
                        directory.pop_back();
                    }
                }
                else
                {
                    directory.push_back(word);
                }
            }
        }
    }
}
