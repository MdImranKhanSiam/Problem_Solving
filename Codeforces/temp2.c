#include <stdio.h>

#include <stdbool.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(arr[0]);

    bool Ascending = true;

    for( int i = 1; i < n; i++ )
    {
        if( arr[i-1] < arr[i] )
        {
            Ascending = false;

            break;
        }
    }

    if( Ascending )
    {
        printf("Ascending\n");
    }
    else
    {
        printf("NOT Ascending\n");
    }

    return 0;
}

