#include <stdio.h>
int main()
{
    int class;

    printf("Input Your Number of classes : ");
    scanf("%d", &class);

    switch (class)
    {
    case 1:
        printf("Computer Arcitecture");
        break;

    case 2:
        printf("OOP");
        break;
    case 3:
        printf("Capstone Project");
        break;
    default:
        printf("Mama No chiting");
    }
}