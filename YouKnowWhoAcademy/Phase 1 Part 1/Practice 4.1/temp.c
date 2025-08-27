#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int x = 0;

    while( n-- )
    {
        char s[4];

        scanf("%s", &s);

        if( s[1] == '+' )
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    printf("%d\n", x);
}
