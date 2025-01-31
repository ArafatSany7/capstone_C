#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch ((num > 0) - (num < 0))
    {
    case 1:
        printf("The number is positive");
        break;
    case -1:
        printf("The number is negative");
        break;
    case 0:
        printf("The number is zero");
        break;
    default:
        printf("Unexpected error");
        break;
    }

    return 0;
}
