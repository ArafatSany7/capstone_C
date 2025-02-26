#include <stdio.h>

int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int findMin(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n, num, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;

    for (int i = 1; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        max = findMax(max, num);
        min = findMin(min, num);
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
