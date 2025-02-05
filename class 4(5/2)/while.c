#include <stdio.h>
int main()
{
    int n = 10, i = 0, sum = 0;

    printf("Sum of first ten natural number is : ");
    while (i <= n)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }
    printf("\nThe sum is : %d", sum);
}