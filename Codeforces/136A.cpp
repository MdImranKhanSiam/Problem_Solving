#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    int arr[n];

    for( int i = 0; i < n; i++ )
    {
        cin >> x;

        arr[x-1] = i+1;
    }

    for( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
