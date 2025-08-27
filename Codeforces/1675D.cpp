#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int vertex;

        cin >> vertex;

        unordered_map<int,int>branch, root;

        for( int i = 1; i <= vertex; i++ )
        {
            int value;

            cin >> value;

            root[value] = 1;

            branch[i] = value;
        }

        if( vertex == 1 )
        {
            cout << 1 << endl << 1 << endl << 1;
            cout << endl << endl;
            continue;
        }

        cout << vertex - root.size() << endl;

        unordered_map<int,int>found;

        for( int i = 1; i <= vertex; i++ )
        {
            if( root[i] == 1 )
                continue;

            vector<int>print;

            int length = 0;

            int locate = i;

            while( true )
            {
                if( found[locate] == -1 )
                    break;

                length++;

                print.push_back(locate);

                found[locate] = -1;

                if( locate == branch[locate] )
                {
                    break;
                }

                locate = branch[locate];
            }

            cout << length << endl;

            for( auto itr = rbegin(print); itr != rend(print); itr++ )
            {
                cout << *itr << " ";
            }

            cout << endl;
        }

        cout << endl;
    }
}
