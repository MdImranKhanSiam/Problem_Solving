#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    string s;

    for( int i = 0; i < n; i++ )
    {
        cin >> s;

        switch(s.at(0))
        {
        case 'T':
            sum += 4;
            break;
        case 'C':
            sum += 6;
            break;
        case 'O':
            sum += 8;
            break;
        case 'D':
            sum += 12;
            break;
        case 'I':
            sum += 20;
            break;
        }
    }

    cout << sum << endl;
}
