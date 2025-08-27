#include <bits/stdc++.h>

using namespace std;

int main()
{
    int servers, connections, bug;

    cin >> servers >> connections >> bug;

    int stage = 1, server = 1;

    unordered_map<int,int>bugs;

    vector<int>vbugs;

    int quantity = 0;

    for( int i = servers; i >= 1; i-- )
    {
        if( i != bug )
        {
            bugs[i] = 1;

            quantity++;

            vbugs.push_back(i);
        }

        if( quantity == 2 )
        {
            break;
        }
    }

    int stage_3 = 1;

    vector<pair<int,int>>result;

    int check = INT_MIN;

    for( int i = 0; i < connections; i++ )
    {
        if( server >= servers )
        {
            server = 1;
            stage++;
        }

        if( bugs[server] == 1 )
        {
            i--;
            server++;
            continue;
        }

        if( server == bug && stage_3 < 4 )
        {
            if( stage_3 == 1 )
            {
                if( max(bug,vbugs[1]) > check )
                {
                    check = max(bug,vbugs[1]);
                }

                result.push_back(make_pair(bug,vbugs[1]));
            }
            else if( stage_3 == 2 )
            {
                if( max(vbugs[1],vbugs[0]) > check )
                {
                    check = max(vbugs[1],vbugs[0]);
                }

                result.push_back(make_pair(vbugs[1],vbugs[0]));
            }
            else if( stage_3 == 3 )
            {
                if( max(bug,vbugs[0]) > check )
                {
                    check = max(bug,vbugs[0]);
                }

                result.push_back(make_pair(bug,vbugs[0]));
            }

            stage_3++;
        }
        else
        {
            if( bugs[server+stage] != 1 )
            {
                if( max(server,server+stage) > check )
                {
                    check = max(server,server+stage);
                }

                result.push_back(make_pair(server,server+stage));
            }
            else
            {
                i--;
            }
        }

        if( check > servers )
        {
            cout << -1 << endl;
            return 0;
        }

        server++;
    }

    for( auto value : result )
    {
        cout << value.first << " " << value.second << endl;
    }

    cout << endl;
}

