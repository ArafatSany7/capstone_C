#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string : ");

    fgets(str, 20, stdin);

    printf("The string you is enter is :  %s", str);
}