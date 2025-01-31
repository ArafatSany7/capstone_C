#include <stdio.h>
int main()
{
    int i, sum = 0, n;

    printf("Enter Length off Number: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");
    for (i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum of %d odd natural numbers: %d\n", n, sum);
}
