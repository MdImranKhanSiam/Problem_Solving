#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[8];

    for( int i = 0; i < 8; i++ )
        cin >> arr[i];

    int ing[3], toast[3], result[3];

    ing[0] = arr[1] * arr[2];
    ing[1] = arr[3] * arr[4];
    ing[2] = arr[5];

    toast[0] = arr[6] * arr[0];
    toast[1] = arr[0];
    toast[2] = arr[7] * arr[0];

    for( int i = 0; i < 3; i++ )
        result[i] = ing[i] / toast[i];

    sort( result, result + 3 );

    cout << result[0] << endl;
}
