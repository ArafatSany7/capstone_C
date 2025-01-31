#include <stdio.h>
int main()
{
    int temp;

    printf("Enter your current tempareture: ");
    scanf("%d", &temp);

    if (temp >= 40)
    {
        printf("Its very hot");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("It is hot");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal in temp");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Its cold");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("very cold weather");
    }
    else
    {
        printf("Freezing weather");
    }
}