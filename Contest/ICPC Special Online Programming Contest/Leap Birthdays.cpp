#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll Case = 0;

    int tc;

    cin >> tc;

    while( tc-- )
    {
        Case++;

        ll day, month, born, limit;

        cin >> day >> month >> born >> limit;

        ll birthday = 0;

        for( int i = born+1; i <= limit; i++ )
        {
            if( day == 29 && month == 2 )
            {
                if( isLeapYear(i) )
                {
                    birthday++;
                }
            }
            else
            {
                birthday++;
            }
        }

        cout << "Case " << Case << ": " << birthday << endl;
    }
}
