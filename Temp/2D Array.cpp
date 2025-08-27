#include <iostream>

using namespace std;

int main()
{
    int size1, size2, i, j;

    cout << "Enter Size1: ";
    cin >> size1;
    cout << "Enter Size2: ";
    cin >> size2;

    int arr[size1][size2];

    for( i = 0; i < size1; i++ )
    {
        for( j = 0; j < size2; j++ )
        {
            cout << "Enter Value: ";
            cin >> arr[i][j];
        }
    }

    for( i = 0; i < size1; i++ )
    {
        for( j = 0; j < size2; j++ )
        {
            cout << "Index[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
}
