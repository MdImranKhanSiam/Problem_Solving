#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout << (c+b+1)%2 << " " << (c+a+1)%2 << " " << (a+b+1)%2 << endl;
    }
}
