#include <bits/stdc++.h>

using namespace std;

int main()
{
    int boys;

    cin >> boys;

    vector<int>boy;

    for( int i = 0; i < boys; i++ )
    {
        int value;

        cin >> value;

        boy.push_back(value);
    }

    sort( boy.begin(), boy.end() );

    int girls;

    cin >> girls;

    vector<int>girl;

    for( int i = 0; i < girls; i++ )
    {
        int value;

        cin >> value;

        girl.push_back(value);
    }

    sort( girl.begin(), girl.end() );

    int index_boy = 0, index_girl = 0, match = 0, range;

    range = boys+girls;

    while( index_boy < boys || index_girl < girls )
    {
        if( abs(boy[index_boy]-girl[index_girl]) <= 1 )
        {
            match++;
            index_boy++;
            index_girl++;
        }
        else
        {
            if( boy[index_boy] < girl[index_girl] )
                index_boy++;
            else
                index_girl++;
        }
    }

    cout << match << endl;
}

