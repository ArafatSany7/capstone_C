#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string : ");

    fgets(str, 20, stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    printf("The string you is enter is :%s", str);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    printf("\n %d", length);
}