#include <stdio.h>

int main()
{
    int n;

    printf("Input legth of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Inputelements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe values stored into the array in reverse are:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
