#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll total_teams;

    ll scenario = 1;

    while( true )
    {
        cin >> total_teams;

        if( total_teams == 0 )
        {
            break;
        }

        unordered_map<ll,ll>identify;

        for( int i = 1; i <= total_teams; i++ )
        {
            ll members;

            cin >> members;

            for( int j = 1; j <= members; j++ )
            {
                ll id;

                cin >> id;

                identify[id] = i;
            }
        }

        list<queue<ll>>teams;

        cout << "Scenario #" << scenario++ << endl;

        while( true )
        {
            string op;

            cin >> op;

            if( op == "ENQUEUE" )
            {
                ll value;

                cin >> value;

                bool success = false;

                for( auto itr = teams.begin(); itr != teams.end(); itr++ )
                {
                    ll current;

                    current = (*itr).front();

                    if( identify[value] == identify[current] )
                    {
                        (*itr).push(value);

                        success = true;
                    }
                }

                if( !success )
                {
                    queue<ll>temp;

                    temp.push(value);

                    teams.push_back(temp);
                }
            }
            else if( op == "DEQUEUE" )
            {
                ll current;

                if( !teams.empty() )
                {
                    current = teams.front().front();

                    teams.front().pop();
                }

                if( teams.front().empty() )
                {
                    teams.pop_front();
                }

                cout << current << endl;
            }
            else if( op == "STOP" )
            {
                break;
            }
        }

        cout << endl;
    }
}
