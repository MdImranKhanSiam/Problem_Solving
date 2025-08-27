#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];

    for( int i = 0; i < 4; i++ )
        cin >> arr[i];

    sort( arr, arr + 4 );

    int total, ab, ac, a, b, c;

    total = arr[3];
    ab = arr[2];
    ac = arr[1];
    b = total - ac;
    c = total - ab;
    a = total - b - c;

    cout << a << " " << b << " " << c << endl;
}
