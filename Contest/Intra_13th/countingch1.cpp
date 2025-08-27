#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>store;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    int mary = 0, john = 0;

    for( auto point : store )
    {
        if( point == 0 )
            mary++;
        else if( point == 1 )
            john++;
    }

    if( mary != 1 && john != 1 )
    {
        cout << "Mary won " << mary << " times and John won "  << john << " times" << endl;
    }
    else if( mary == 1 && john == 1 )
    {
        cout << "Mary won " << mary << " time and John won "  << john << " time" << endl;
    }
    else if( mary == 1 && john > 1 )
    {
        cout << "Mary won " << mary << " time and John won "  << john << " times" << endl;
    }
    else if( mary > 1 && john == 1 )
    {
        cout << "Mary won " << mary << " times and John won "  << john << " time" << endl;
    }

    return 0;
}

