#include <stdio.h>

int main()
{
    int num;
    int long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}
