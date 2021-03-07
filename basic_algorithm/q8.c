#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;

    puts("가우스의 덧셈");
    printf("n 입력: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        sum = (1 + n) * (n / 2);
    }
    else
    {
        sum = n * (n / 2 + 1);
    }

    printf("결과: %d\n", sum);
    return 0;
}