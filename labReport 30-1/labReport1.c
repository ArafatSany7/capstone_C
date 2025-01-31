#include <stdio.h>
int main()
{
    int mark;
    char c[10];

    printf("Enter your mark: ");
    if (fgets(c, 10, stdin) != NULL)
    {
        if (sscanf(c, "%d", &mark) == 1)
        {
            if (mark >= 90)
            {
                printf("Your grade is: A");
            }
            else if (mark >= 80 && mark < 90)
            {
                printf("Your grade is: B");
            }
            else if (mark >= 70 && mark < 80)
            {
                printf("Your grade is: C");
            }
            else if (mark >= 60 && mark < 70)
            {
                printf("Your grade is: D");
            }
            else if (mark < 60)
            {
                printf("Your grade is : F");
            }
            else
            {
                printf("Input valid mark!!!");
            }
        }
        else
        {
            printf("Unexpected Input");
        }
    }
}