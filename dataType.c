#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    double d;
    char s[100];

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double float: ");
    scanf("%lf", &d);

    printf("Enter a string: ");
    scanf("%s", &s);

    printf("The Integer is: %d\n", i);
    printf("The Character is: %c\n", c);
    printf("The Float is: %.2f\n", f);
    printf("The Double is: %.5f\n", d);
    printf("The String is: %s\n", s);

}
