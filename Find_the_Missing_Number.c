#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int multiplication = A * B * C;

        if (M == 0)
        {
            printf("0\n");
        }
        else if (M % multiplication == 0)
        {
            printf("%lld\n", M / multiplication);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}