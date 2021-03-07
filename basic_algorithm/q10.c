#include <stdio.h>

int main()
{
    int a, b;

    printf("a: ");
    scanf("%d", &a);
    do
    {
        printf("b: ");
        scanf("%d", &b);
        if (a >= b)
            printf("a보다 큰 값을 입력하세요!\n");
    } while (a >= b);
    printf("b-a: %d\n", b-a);
    return 0;
}