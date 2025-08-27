#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for( int i = 0; i < n; i++ )
        cin >> arr[i];

    int left = 0, right = n - 1, s = 0, d = 0, cmax;
    bool turn = true;

    while( left <= right )
    {
        if( arr[left] >= arr[right] )
        {
            cmax = arr[left];
            left++;
        }
        else if( arr[right] > arr[left] )
        {
            cmax = arr[right];
            right--;
        }

        if( turn == true )
        {
            s += cmax;
            turn = false;
        }
        else if( turn == false )
        {
            d += cmax;
            turn = true;
        }
    }

    cout << s << " " << d << endl;
}
