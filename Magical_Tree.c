#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int width = n + 10;
    int line = (width + 1) / 2;

    for (int i = 1; i <= width; i += 2)
    {
        int spaces = (width - i) / 2;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        int spaces = (width - n) / 2;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}