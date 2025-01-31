#include <stdio.h>
int main()
{
    int i, sum = 0, n;

    printf("Enter Length off Numbers: ");
    scanf("%d", &n);

    printf("The even numbers are: ");
    for (i = 0; i <= n; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum of %d even natural numbers: %d\n", n, sum);
}
