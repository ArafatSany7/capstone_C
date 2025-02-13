#include <stdio.h>
int main()
{
    int start, end, sum;
    int temp;

    printf("Enter start and end value : ");
    scanf("%d", &start);
    scanf("%d", &end);

    for (int i = start; i <= end; i++)

    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            int reminder = temp % 10;
            temp = temp / 10;
            sum = sum + (reminder * reminder * reminder);
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }
}
