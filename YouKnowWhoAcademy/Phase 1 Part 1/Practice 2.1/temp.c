#include<stdio.h>

int main()
{
    char name[100];
    int age;
    char add[200];

    printf("Enter your name: ");

    scanf("%[^\n]s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your address: ");

    scanf("%[^\n]s", name);

    printf("\t\tUSER INFO\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", add);
}
