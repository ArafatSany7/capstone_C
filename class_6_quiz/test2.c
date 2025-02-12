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

    printf("Element store in first array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int sarray[n];
    for (int i = 0; i < n; i++)
    {
        sarray[i] = arr[i];
    }

    printf("\nElements copied in the second array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sarray[i]);
    }
}