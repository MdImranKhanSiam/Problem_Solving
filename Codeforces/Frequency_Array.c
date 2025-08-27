#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n];

    for( int i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }

    int hashmap[m+1];

    for( int i = 0; i < m+1; i++ )
    {
        hashmap[i] = 0;
    }

    for( int i = 0; i < n; i++ )
    {
        int value = arr[i];

        hashmap[value]++;
    }

    for( int i = 1; i <= m; i++ )
    {
        printf("%d\n", hashmap[i]);
    }
}
