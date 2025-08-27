#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    while( true )
    {
        int n;

        scanf("%d", &n);

        if( n == 0 )
        {
            break;
        }

        int arr[n];

        for( int i = 0; i < n; i++ )
        {
            scanf("%d", &arr[i]);
        }

        int Max = INT_MIN;

        for( int i = 0; i < n; i++ )
        {
            if( arr[i] > Max )
            {
                Max = arr[i];
            }
        }

        printf("%d\n", Max);
    }
}
