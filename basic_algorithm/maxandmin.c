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

int moreMax(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}

int min(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    return min;
}

int moreMin(int a, int b, int c, int d)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;

    return min;
}

int main(void)
{
    printf("max of %d, %d, %d : %d\n", 1, 2, 3, max(1, 2, 3));
    printf("min of %d, %d, %d : %d\n", 4, 5, 6, min(4, 5, 6));
    printf("max of %d, %d, %d, %d : %d\n", 1, 2, 3, 4, moreMax(1, 2, 3, 4));
    printf("min of %d, %d, %d, %d : %d\n", 5, 6, 7, 8, moreMin(5, 6, 7, 8));
    return 0;
}

/*
#함수의 반환값과 함수호출식의 평가
- 함수는 return 문에서 처리한 결과값을 원래 호출한 곳으로 반환한다.
- 반환값의 자료형이 void인 함수는 값을 반환하지 않는다.
*/