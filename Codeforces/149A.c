#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[12];

    for( int i = 0; i < 12; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for( int i = 0; i < 12; i++ )
    {
        for( int j = 0; j < 12; j++ )
        {
            if( arr[i] > arr[j] )
            {
                int temp = arr[i];

                arr[i] = arr[j];

                arr[j] = temp;
            }
        }
    }

    int result = -1;

    if( n == 0 )
    {
        result = 0;
    }
    else
    {
        int growth = 0;

        for( int i = 0; i < 12; i++ )
        {
            growth += arr[i];

            if( growth >= n )
            {
                result = i+1;

                break;
            }
        }
    }

    printf("%d\n", result);
}
