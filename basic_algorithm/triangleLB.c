#include <stdio.h>

int main()
{
    int i, j, n;
    do
    {
        printf("몇 단 삼각형? : ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}