#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sizee, i, j, temp;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    for( i = 0; i < sizee - 1; i++ )
    {
        for( j = 0; j < sizee - i - 1; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "After Sorting:";

    for( int i = 0; i < sizee; i++ )
    {
        cout << " " << arr[i];
    }

    return 0;
}
