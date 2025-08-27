#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    map<string,ll>student;

    while( tc-- )
    {
        ll type, marks;

        string name;

        cin >> type >> name;

        if( type == 1 )
        {
            cin >> marks;

            if( student[name] == NULL )
            {
                student[name] = marks;
            }
            else
            {
                student[name] += marks;
            }
        }
        else if( type == 2 )
        {
            student.erase(name);
        }
        else if( type == 3 )
        {
            cout << student[name] << endl;
        }
    }
}
