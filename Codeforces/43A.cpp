#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    map<string,int>team;

    for( int i = 0; i < n; i++ )
    {
        string s;

        cin >> s;

        if( team[s] == NULL )
        {
            team[s] = 1;
        }
        else if( team[s] != NULL )
        {
            team[s]++;
        }
    }

    map<string,int>::iterator round;

    map<int,string>score;
    vector<int>winner;

    for( round = team.begin(); round != team.end(); round++ )
    {
        score[round->second] = round->first;
        winner.push_back(round->second);
    }

    sort( winner.begin(), winner.end(), greater<int>() );

    cout << score[winner[0]] << endl;
 }

