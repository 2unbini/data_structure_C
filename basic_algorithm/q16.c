#include <stdio.h>

void triangleLB(int n);
void triangleRB(int n);
void triangleLT(int n);
void triangleRT(int n);

int main()
{
    int n;
    do
    {
        printf("n : ");
        scanf("%d", &n);
    } while (n <= 0);
    triangleLB(n);
    triangleRB(n);
    triangleLT(n);
    triangleRT(n);
    return 0;
}

void triangleLB(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    putchar('\n');
}

void triangleLT(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            putchar('*');
        }
        putchar('\n');
    }
    putchar('\n');
}

void triangleRT(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            putchar(' ');
        }
        for (k = n; k >= i; k--)
        {
            putchar('*');
        }
        putchar('\n');
    }
    putchar('\n');
}

void triangleRB(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            putchar(' ');
        }
        for (k = 1; k <= i; k++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    putchar('\n');
}