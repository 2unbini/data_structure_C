#include <stdio.h>

int main()
{
    int i, n;
    int sum;
    puts("1~n까지의 합.");
    do
    {
        printf("n의 값: ");
        scanf("%d", &n);
    } while (n <= 0);
    sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    printf("result: %d\n", sum);
    return 0;
}

/*
사전판단 반복문인 while문과 for문은 처음에 제어식을 평가한 결과가 0이면 루프 본문이 한번도 실행되지 않는다.
반면, 사후판단 반복문인 do문은 루프 본문이 반드시 한 번 실행된다는 차이점이 있다.
*/