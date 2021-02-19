#include <stdio.h>

int max(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main(void)
{
    printf("max(%d, %d, %d) = %d\n", 3, 2, 1, max(3, 2, 1));
    printf("max(%d, %d, %d) = %d\n", 3, 2, 2, max(3, 2, 2));
    printf("max(%d, %d, %d) = %d\n", 3, 2, 3, max(3, 2, 3));
    printf("max(%d, %d, %d) = %d\n", 2, 1, 3, max(2, 1, 3));
    printf("max(%d, %d, %d) = %d\n", 3, 3, 2, max(3, 3, 2));
    printf("max(%d, %d, %d) = %d\n", 3, 3, 3, max(3, 3, 3));
    printf("max(%d, %d, %d) = %d\n", 2, 2, 3, max(2, 2, 3));
    printf("max(%d, %d, %d) = %d\n", 2, 3, 1, max(2, 3, 1));
    printf("max(%d, %d, %d) = %d\n", 2, 3, 2, max(2, 3, 2));
    printf("max(%d, %d, %d) = %d\n", 1, 3, 2, max(1, 3, 2));
    printf("max(%d, %d, %d) = %d\n", 2, 3, 3, max(2, 3, 3));
    printf("max(%d, %d, %d) = %d\n", 1, 2, 3, max(1, 2, 3));
    return 0;
}

//알고리즘은 문제를 해결하기 위한 것으로, 명확하게 정의되고 순서가 있는 유한 개의 규칙으로 이루어진 집합.
