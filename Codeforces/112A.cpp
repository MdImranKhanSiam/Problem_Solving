#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    int ans;

    for( int i = 0; a[i] != '\0'; i++ )
    {
        if( tolower(a[i]) != tolower(b[i]) )
        {
            if( tolower(a[i]) < tolower(b[i]) )
            {
                ans = -1;
                break;
            }
            else if( tolower(b[i]) < tolower(a[i]) )
            {
                ans = 1;
                break;
            }
        }
        else
            ans = 0;
    }

    cout << ans << endl;


}
