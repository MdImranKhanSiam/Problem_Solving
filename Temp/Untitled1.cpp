/*

//Bubble Sort

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sizee;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( int i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    for( int i = 0; i < sizee - 1; i++ )
    {
        for( int j = 0; j < sizee - i - 1; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                int temp = arr[j];
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


*/




/*

//Selection Sort

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sizee;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( int i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    for( int i = 0; i < sizee - 1; i++ )
    {
        int mini = i;

        for( int j = i + 1; j < sizee; j++ )
        {
            if( arr[j] < arr[mini] )
            {
                mini = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }



    cout << "After Sorting:";

    for( int i = 0; i < sizee; i++ )
    {
        cout << " " << arr[i];
    }

    return 0;
}

*/




/*

//Insertion Sort

#include <iostream>

using namespace std;

int main()
{
    int sizee;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( int i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    for( int i = 1; i < sizee; i++ )
    {
        int key = arr[i];
        int j = i - 1;

        while( key < arr[j] && j >= 0 )
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    cout << "After Sorting:";

    for( int i = 0; i < sizee; i++ )
    {
        cout << " " << arr[i];
    }

    return 0;
}


*/















