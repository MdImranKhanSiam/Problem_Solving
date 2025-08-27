#include <iostream>

using namespace std;

int main()
{
    int sizee, i, target, position = -1;

    cout << "Array Size: ";
    cin >> sizee;

    int arr[sizee];

    for( i = 0; i < sizee; i++ )
    {
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    cout << "Enter Target: ";
    cin >> target;

    for( i = 0; i < sizee; i++ )
    {
        if( arr[i] == target )
        {
            position = i+1;
            break;
        }
    }

    if( position == -1 )
        cout << "Not Found" << endl;
    else
        cout << target << " Found At Position " << position << endl;

    return 0;
}
