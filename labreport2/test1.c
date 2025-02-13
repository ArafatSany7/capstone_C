#include <stdio.h>

int main()
{
    int N, h, d, g;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &h, &d, &g);

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
        {
            printf("Sim\n");
        }
        else
        {
            printf("Nao\n");
        }
    }

    return 0;
}
