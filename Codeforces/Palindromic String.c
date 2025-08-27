#include <stdio.h>

int main()
{
    char s[105];

    scanf("%s", s);

    int length = strlen(s);

    char reverse_s[length];

    int j = 0;

    for( int i = length-1; i >= 0; i-- )
    {
        reverse_s[j] = s[i];

        j++;
    }

    for( int i = 0; i < length; i++ )
    {
        if( s[i] != reverse_s[i] )
        {
            printf("NO\n");

            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
