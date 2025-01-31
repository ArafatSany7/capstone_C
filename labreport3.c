#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, num3;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Enter number 3 : ");
    scanf("%d", &num3);

    int max = fmax(num1, fmax(num2, num3));
    int min = fmin(num1, fmin(num2, num3));

    printf("\n");

    printf("Maximum number is : %d\n", max);
    printf("Minimum number is : %d", min);
}