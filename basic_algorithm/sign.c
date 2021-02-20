#include <stdio.h>

int main()
{
    int n;

    printf("input number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("%d is positive number.\n", n);
    else if (n < 0)
        printf("%d is negative number.\n", n);
    else
        printf("%d is 0.\n", n);

    return 0;
}

/*
위 식은 n>0, n<0, n=0인 세 가지 경우를 단 한가지만 실행하는, 중복이나 생략이 없는 프로그램이다.
이렇듯, 프로그램이 어느 하나만 실행되도록 나뉜 것을 '분기'라 한다.
*/