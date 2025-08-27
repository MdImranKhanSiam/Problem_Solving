#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>score;

    map<int,int>score_index;

    for( int i = 1; i <= 8; i++ )
    {
        int value;

        cin >> value;

        score.push_back(value);

        score_index[value] = i;
    }

    sort( score.begin(), score.end(), greater<int>() );

    int total_score = 0;

    vector<int>index;

    for( int i = 0; i < 5; i++ )
    {
        total_score += score[i];

        index.push_back(score_index[score[i]]);
    }

    cout << total_score << endl;

    sort( index.begin(), index.end() );

    for( auto i : index )
    {
        cout << i << " ";
    }

    cout << endl;
}

