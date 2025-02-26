#include <stdio.h>
#include <string.h>

int pal(char *s, int l, int r)
{
    if (l >= r)
        return 1;
    if (s[l] != s[r])
        return 0;
    return pal(s, l + 1, r - 1);
}

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    printf(pal(s, 0, strlen(s) - 1) ? "palindrome" : "Not palindrome");
    return 0;
}
