#include <stdio.h>

const char *isEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The number %d is %s.\n", num, isEvenOrOdd(num));
    return 0;
}
