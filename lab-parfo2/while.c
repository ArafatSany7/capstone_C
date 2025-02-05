#include <stdio.h>
int main()
{
    int n, i = 0, cube = 0;

    printf("Enter integer range : ");
    scanf("%d", &n);

    while (i <= n)
    {
        cube = i * i * i;

        i++;
        printf("Number is : %d and cube of the %d is : %d\n", i, i, cube);
    }
}