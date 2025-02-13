#include <stdio.h>
int main()
{
    int n, o = 0, p = 1;
    scanf("%d", &n);
    while (n != 0)
    {
        o += (n % 8) * p;
        n /= 8;
        p *= 10;
    }
    printf("%d\n", o);
    return 0;
}
