#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cars;

    cin >> cars;

    queue<int>entry;

    for( int i = 0; i < cars; i++ )
    {
        int id;

        cin >> id;

        entry.push(id);
    }

    unordered_map<int,int>fined;

    int fine = 0;

    int target = entry.front();

    entry.pop();

    for( int i = 0; i < cars; i++ )
    {
        int id;

        cin >> id;

        if( id == target )
        {
            target = entry.front();

            entry.pop();

            while( fined[target] == 1 )
            {
                target = entry.front();

                entry.pop();
            }
        }
        else
        {
            fined[id] = 1;

            fine++;
        }
    }

    cout << fine << endl;
}

