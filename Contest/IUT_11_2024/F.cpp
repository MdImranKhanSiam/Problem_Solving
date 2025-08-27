#include <bits/stdc++.h>

using namespace std;

#define int long long int

main()
{
    int x;

    cin >> x;

    int n;

    cin >> n;

    map<char,int>party_vote;

    for( int i = 0; i < n; i++ )
    {
        char value1;
        int value2;

        cin >> value1 >> value2;

        party_vote[value1] = value2;
    }

    int percent;

    percent = (x/100)*5;

    vector<pair<char,int>>chosen;

    vector<char>chosen_party;

    map<char,int>::iterator it;

    for( it = party_vote.begin(); it != party_vote.end(); it++ )
    {
        if( it->second >= percent )
        {
            pair<char,int>value;

            value.first = it->first;
            value.second = it->second;

            chosen.push_back(value);

            chosen_party.push_back(it->first);
        }
    }

    sort( chosen_party.begin(), chosen_party.end() );

    vector<int>all_score;

    map<int,char>score_party;

    for( auto party : chosen )
    {
        for( int i = 1; i <= 14; i++ )
        {
            int score;

            score = party.second/i;

            all_score.push_back(score);

            score_party[score] = party.first;
        }
    }

    sort( all_score.begin(), all_score.end(), greater<int>() );

    map<char,int>final_party;

    for( int i = 0; i < 14; i++ )
    {
        final_party[score_party[all_score[i]]]++;
    }

    for( auto i : chosen_party )
    {
        cout << i << " " << final_party[i] << endl;
    }
}


