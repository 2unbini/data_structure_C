#include <stdio.h>

int sumof(int a, int b)
{
    int min, max;
    int sum = 0;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for (int i = min; i <= max; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int a, b;
    int sum;
    printf("a, b 입력: ");
    scanf("%d %d", &a, &b);
    sum = sumof(a, b);
    printf("result: %d\n", sum);
}

/*
c언어에서는 0을 거짓, 0이 아닌 수를 참으로 간주한다.
if(a) printf("a is not 0");
라는 코드는, a가 0이 아니기만 하면 printf 안의 문장을 출력하는 것이다.
*/