#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void initial_position( vector<queue<ll>>&block_world, ll block )
{
    vector<ll>store;

    while( !block_world[block].empty() )
    {
        ll value = block_world[block].front();

        store.push_back(value);

        block_world[block].pop();
    }

    for( auto point : store )
    {
        block_world[point].push(point);
    }
}

void print_world( vector<queue<ll>>&block_world, ll n )
{
    for( int i = 0; i < n; i++ )
    {
        queue<ll>store;

        cout << i << ":";

        while( !block_world[i].empty() )
        {
            ll value = block_world[i].front();

            cout << " " << value;

            store.push(value);

            block_world[i].pop();
        }

        block_world[i] = store;

        cout << endl;
    }
}

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<queue<ll>>block_world(n), stack_tracker(n);

    for( int i = 0; i < n; i++ )
    {
        block_world[i].push(i);

        stack_tracker[i].push(i);
    }

    string s;

    getchar();

    while( true )
    {
        print_world(block_world,n);

        getline(cin,s);

        if( s == "quit" )
        {
            break;
        }

        istringstream load(s);

        string read;

        vector<string>command;

        while( load >> read )
        {
            command.push_back(read);
        }

        ll a = stoll(command[1]);

        ll b = stoll(command[3]);

        if( command[0] == "move" && command[2] == "onto" )
        {
            initial_position(block_world, a);

            initial_position(block_world, b);

            block_world[b].push(a);

            block_world[a].pop();
        }
        else if( command[0] == "move" && command[2] == "over" )
        {

        }
        else if( command[0] == "pile" && command[2] == "onto" )
        {

        }
        else if( command[0] == "pile" && command[2] == "over" )
        {

        }
    }
}
