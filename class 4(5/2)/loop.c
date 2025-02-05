#include <stdio.h>
int main()
{
    int n = 10, i, sum = 0;

    printf("Sum of first ten natural number is : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d", i);
        sum += i;
    }
    printf("\nThe sum is : %d", sum);
}