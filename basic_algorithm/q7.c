#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;
    puts("1~n의 합");
    printf("n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
        if (i == 7)
        {
            printf("%d = %d", i, sum);
            break;
        }
        printf("%d + ", i);
    }

    return 0;
}