#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    scanf("%d", &n);
    do
    {
        n /= 10;
        count++;
    } while (n >= 10);

    printf("해당 수는 %d자리입니다.\n", count + 1);
    return 0;
}