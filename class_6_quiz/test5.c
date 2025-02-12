#include <stdio.h>

int main()
{
    int rollNo, physics, chemistry, compu;
    char name[50];

    printf("Roll Number: ");
    scanf("%d", &rollNo);
    printf(" Name of the Student: ");
    scanf("%s", name);
    printf("marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &compu);

    int totalMarks = physics + chemistry + compu;
    float percentage = totalMarks / 3.0;

    char *division;
    if (percentage >= 80)
    {
        division = "First";
    }
    else if (percentage >= 60)
    {
        division = "Second";
    }
    else if (percentage >= 40)
    {
        division = "Third";
    }
    else
    {
        division = "Fail";
    }

    printf("Roll No: %d\n", rollNo);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", compu);
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s\n", division);
}
