%{

#include <stdio.h>

int Vowel( char s[] );

%}

%%

[a-zA-Z]+
{
    printf("Total Vowel %d\n", Vowel(yytext));
}

%%

int Vowel( char s[] )
{
    int total = 0;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        if( s[i] == 'a' || s[i] == 'A' ||
            s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' ||
            s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U' )
        {
            total++;
        }
    }

    return total;
}

int yywrap()
{
    return 1;
}

int main()
{
    printf("Number Of Vowels\n");

    yylex();

    return 0;
}
