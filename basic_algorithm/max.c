#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;

    printf("세 수의 최댓값은?\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    //문장이 순차적으로 실행됨
    //결국, a와 b를 비교, 그리고 그 비교된 값과 c 를 비교하면서 최댓값을 찾아나가는 방식.
    //if문과 같이 괄호 안에 있는 식의 평가 결과에 따라 프로그램의 실행 흐름을 변경하는 것을 '선택(selection) 구조'라고 한다.
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("최댓값: %d\n", max);
    return 0;
}

/*
#연산자와 피연산자
- 연산을 수행하는 기호를 연산자(operator), 연산의 대상이 되는 식을 피연산자(operand)라고 함.
- 피연산자의 수에 따라 연산자의 종류가 세 가지로 분류된다.
  단항 연산자(a++...), 2항 연산자(a>b...), 3항 연산자(a?b:c...)

#식과 식의 평가
- 프로그램을 실행할 때 식이 평가된다.
  *식(expression) : 변수, 상수, 변수나 상수를 연산자로 결합한 것.
  *식의 평가
    - 원칙적으로 모든 수식에는 값이 있음(void형 제외)
    - 이는 프로그램을 실행할 때 확인할 수 있으며, 이 식의 값을 알아내는 것을 '평가(evaluation)'라 함.
    - 식을 평가하면 형과 값을 얻을 수 있음.
    예) x + 50
      => x = 40 일 때, x의 형은 int, 값은 40.
      => 50의 형은 int, 값은 50.
      => 합의 결과로 나온 90의 형은 int, 값은 90.

#max 구하는 프로그램
- if문, while문 등에서 조건 판정을 위해 괄호 안에 넣는 식을 '제어식'이라 함.
- max 구하는 프로그램에서, 프로그램의 흐름은 두 갈래 중 어느 한 쪽을 지나야 함.
- 이는 if문에 의해 흐름의 분기가 나타나는데, 이러한 분기를 '쌍기(양갈래) 선택'이라 함.
- 변수 선언과 동시에 값을 넣는 것을 '초기화', 변수 선언 뒤에 값을 넣는 것을 '대입'이라 함.

#관계 연산자와 등가 연산자
- 피연산자의 대소 관계를 판단하는 관계 연산자(>, >=, <, <=),
  그리고 값이 같은지 다른지 관계를 판단하는 등가 연산자(==, !=)는 참이면 int형 1, 거짓이면 int형 0을 반환한다.
*/