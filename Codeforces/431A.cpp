#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4], sum = 0;

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    string s;

    cin >> s;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        int n = s.at(i) - 48;

        sum += arr[n-1];
    }

    cout << sum << endl;
}
