#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the range for natural number : ");
    scanf("%d", &n);

    printf("Sum of first ten natural number is : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum of natural number upto %d  terms: %d", n, sum);
}