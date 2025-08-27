#include <bits/stdc++.h>

using namespace std;

#define int long long int

void Dijkstra( unordered_map<string,unordered_map<string,int>>&graph, unordered_map<string,pair<int,string>>&Table, string start )
{
    unordered_map<string,int>unvisited, priority;

    for( auto node : graph )
    {
        string temp = node.first;

        unvisited[temp] = 1;

        if( temp == start )
        {
            Table[temp] = make_pair(0,NULL);
        }
        else
        {
            Table[temp] = make_pair(INT_MAX,NULL);
        }
    }

    string current;

    priority[start] = 0;

    while( true )
    {
        bool finish = true;

        int minimum = INT_MAX;

        for( auto value : priority )
        {
            finish = false;

            int temp = value.second;

            if( temp < minimum )
            {
                minimum = temp;
                current = value.first;
            }
        }

        if( finish == true )
        {
            break;
        }

        unvisited[current] = 0;
        priority.erase(current);

        for( auto node : graph[current] )
        {
            string temp = node.first;

            if( unvisited[temp] == 1 )
            {
                int calc = Table[current].first+graph[current][temp];

                if( Table[temp].first > calc )
                {
                    Table[temp].first = calc;
                    Table[temp].second = current;

                    priority[temp] = calc;
                }
            }
        }
    }
}

signed main()
{
    int towns, railways, roads;

    cin >> towns >> railways;

    unordered_map<string,unordered_map<string,int>>Rail, Road;

    bool found_railway = false, found_last_railway = false, found_last_highway = false;

    for( int i = 0; i < railways; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( (vertex1 == 1 && vertex2 == towns) || (vertex1 == towns && vertex2 == 1) )
        {
            found_railway = true;
        }

        if( vertex1 == towns || vertex2 == towns )
        {
            found_last_railway = true;
        }

        Rail[to_string(vertex1)][to_string(vertex2)] = 1;
        Rail[to_string(vertex2)][to_string(vertex1)] = 1;
    }

    unordered_map<string,pair<int,string>>Table;

    if( found_railway == true )
    {
        for( int i = 1; i < towns; i++ )
        {
            for( int j = i+1; j <= towns; j++ )
            {
                if( Rail[to_string(i)][to_string(j)] != 1 )
                {
                    if( i == towns || j == towns )
                    {
                        found_last_highway = true;
                    }

                    Road[to_string(i)][to_string(j)] = 1;
                    Road[to_string(j)][to_string(i)] = 1;
                }
            }
        }

        if( found_last_highway == false )
        {
            cout << -1 << endl;
            return 0;
        }

        Dijkstra(Road, Table, "1");
    }
    else
    {
        Dijkstra(Rail, Table, "1");
    }

    if( (railways == 0) || (railways == (((towns-1)*(towns))/2)) || (found_last_railway == false) )
    {
        cout << -1 << endl;
        return 0;
    }

    bool path = true;

    int result = Table[to_string(towns)].first;

    string current = to_string(towns);

    unordered_map<string,int>visited;

    while( true )
    {
        visited[current] = 1;

        current = Table[current].second;

        if( current == "1" )
        {
            break;
        }

        if( visited[current] == 1 )
        {
            path = false;
            break;
        }
    }

    cout << ( (path==false) ? -1 : result ) << endl;
}
