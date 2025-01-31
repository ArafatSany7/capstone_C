#include <stdio.h>
int main()
{
    int day;

    printf("Which day are you looking for: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Start the day with some exercise");
        break;
    case 2:
        printf("Read a new Book");
        break;
    case 3:
        printf("Mid-week movie night");
        break;
    case 4:
        printf("Try coocking new recipe");
        break;
    case 5:
        printf("Hangout with friend");
        break;
    case 6:
        printf("Go for hike or outdoor activity");
        break;
    case 7:
        printf("Relax and prepare for the week ahead");
        break;

    default:
        printf("Not valid day");
        break;
    }
}