#include <stdio.h>

void spira(int n);

int main()
{
    int n;

    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n <= 0);

    spira(n);
    return 0;
}

void spira(int n)
{
    int x, y, m;
    int i, j, k, l = 1;
    m = (n - 1) * 2 + 1;

    for (i = n; i >= 1; i--)
    {
        x = (i - 1) * 2 + 1;
        y = (m - x) / 2;
        for (j = 1; j <= y; j++)
        {
            putchar(' ');
        }
        for (k = 1; k <= x; k++)
        {
            printf("%d", l);
        }
        for (; j > 0; j--)
        {
            putchar(' ');
        }
        l++;
        putchar('\n');
    }
}