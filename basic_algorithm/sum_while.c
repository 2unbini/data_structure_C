#include <stdio.h>

int main(void)
{
    int i, n;
    int sum;

    puts("1~n 합 구하기");
    printf("n의 값: ");
    scanf("%d", &n);
    sum = 0;
    i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("1~n의 합: %d\n", sum);
    return 0;
}

//while 문은 실행 전에 반복을 계속할 지 판단하는데, 이런 구조를 '사전 판단 반복 구조'라 한다.
//제어식의 평갓값이 0이 아니면 명령문을 반복한다.
//위 루프문에서 i가 n과 대소비교를 했을 때, 그 관계가 제어식과 같지 않으면 해당 루프문을 종료하는 것이므로,
//루프문이 종료되는 시점에서 i의 값은 n+1이 된다.