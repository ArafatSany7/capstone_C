#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("Least Significant Bit (LSB) is set (1).\n");
    else
        printf("Least Significant Bit (LSB) is not set (0).\n");

    return 0;
}
