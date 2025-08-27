#include <iostream>

using namespace std;

int main()
{
    int sizee, i, j, key;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    for( i = 1; i < sizee; i++ )
    {
        key = arr[i];
        j = i - 1;

        while( key < arr[j] && j >= 0 )
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    cout << "After Sorting:";

    for( i = 0; i < sizee; i++ )
    {
        cout << " " << arr[i];
    }

    return 0;
}
