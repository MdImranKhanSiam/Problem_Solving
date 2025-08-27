#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int dorm, letter, start, finish, up = 0;

    cin >> dorm >> letter;

    vector<long long int>room;

    for( int i = 0; i < dorm; i++ )
    {
        long long int value;

        cin >> value;

        room.push_back(value);
    }

    start = 0;
    finish = room[0];

    for( int i = 0; i < letter; i++ )
    {
        long long int post;

        cin >> post;

        while( post > finish )
        {
            up++;

            start = finish;
            finish += room[up];
        }

        cout << up+1 << " " << post - start << endl;
    }
}

