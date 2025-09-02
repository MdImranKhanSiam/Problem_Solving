#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool legal( vector<list<ll>>&Block_World, ll a, ll b )
{
    bool result = true;

    ll length = Block_World.size();

    for( int i = 0; i < length; i++ )
    {
        ll total = 0;

        for( auto point : Block_World[i] )
        {
            if( point == a || point == b )
            {
                total++;
            }
        }

        if( total == 2 )
        {
            result = false;

            break;
        }
    }

    if( a == b )
    {
        result = false;
    }

    return result;
}

void print_world( vector<list<ll>>&Block_World )
{
    ll length = Block_World.size();

    for( int i = 0; i < length; i++ )
    {
        cout << i << ":";

        for( auto point : Block_World[i] )
        {
            cout << " " << point;
        }

        cout << endl;
    }
}

void initial_state( vector<list<ll>>&Block_World, ll target )
{
    ll length = Block_World.size();

    bool flag = false;

    vector<ll>return_blocks;

    for( int i = 0; i < length; i++ )
    {
        if( !Block_World[i].empty() )
        {
            for( auto itr = Block_World[i].begin(); itr != Block_World[i].end(); )
            {
                if( *itr == target )
                {
                    flag = true;
                }

                if( flag == true )
                {
                    return_blocks.push_back(*itr);

                    itr = Block_World[i].erase(itr);
                }
                else
                {
                    itr++;
                }
            }

            if( flag == true )
            {
                break;
            }
        }
    }

    for( auto point : return_blocks )
    {
        Block_World[point].push_back(point);
    }
}

void put_a_on_b( vector<list<ll>>&Block_World, ll a, ll b )
{
    ll length = Block_World.size();

    vector<ll>stack_a;

    bool flag = false;

    for( int i = 0; i < length; i++ )
    {
        if( !Block_World[i].empty() )
        {
            for( auto itr = Block_World[i].begin(); itr != Block_World[i].end(); )
            {
                if( *itr == a )
                {
                    flag = true;
                }

                if( flag == true )
                {
                    stack_a.push_back(*itr);

                    itr = Block_World[i].erase(itr);
                }
                else
                {
                    itr++;
                }
            }

            if( flag == true )
            {
                break;
            }
        }
    }

    flag = false;

    for( int i = 0; i < length; i++ )
    {
        if( !Block_World[i].empty() )
        {
            for( auto itr = Block_World[i].begin(); itr != Block_World[i].end(); itr++ )
            {
                if( *itr == b )
                {
                    flag = true;

                    break;
                }
            }

            if( flag == true )
            {
                for( auto point : stack_a )
                {
                    Block_World[i].push_back(point);
                }

                break;
            }
        }
    }
}

int main()
{
    ll n;

    cin >> n;

    string s;

    getchar();

    vector<list<ll>>Block_World(n);

    for( int i = 0; i < n; i++ )
    {
        Block_World[i].push_back(i);
    }

    while( true )
    {
        getline(cin,s);

        if( s == "quit" )
        {
            break;
        }

        vector<string>store;

        istringstream read(s);

        string word;

        while( read >> word )
        {
            store.push_back(word);
        }

        ll a = stoll(store[1]);

        ll b = stoll(store[3]);

        if( legal(Block_World,a,b) )
        {
            if( store[0] == "move" && store[2] == "onto" )
            {
                initial_state(Block_World,a);

                initial_state(Block_World,b);

                put_a_on_b(Block_World,a,b);
            }
            else if( store[0] == "move" && store[2] == "over" )
            {
                initial_state(Block_World,a);

                put_a_on_b(Block_World,a,b);
            }
            else if( store[0] == "pile" && store[2] == "onto" )
            {
                initial_state(Block_World,b);

                put_a_on_b(Block_World,a,b);
            }
            else if( store[0] == "pile" && store[2] == "over" )
            {
                put_a_on_b(Block_World,a,b);
            }
        }
    }

    print_world(Block_World);
}
