#include <iostream>

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
        int mini = i;

        for( j = i + 1; j < sizee; j++ )
        {
            if( arr[j] < arr[mini] )
            {
                mini = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }

    cout << "After Sorting:";

    for( i = 0; i < sizee; i++ )
    {
        cout << " " << arr[i];
    }

    return 0;
}
