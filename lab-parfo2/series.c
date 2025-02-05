#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, term = 1;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += term;
        printf("%d ", term);
        if (i < n)
        {
            printf("+ ");
        }
        term = term * 10 + 1;
    }

    printf("\nThe Sum is: %d\n", sum);

    return 0;
}
