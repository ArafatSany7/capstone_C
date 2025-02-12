#include <stdio.h>

int main()
{
    int number, firstDigit, lastDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    temp = number;
    while (temp >= 10)
    {
        temp /= 10;
    }
    firstDigit = temp;

    int sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
