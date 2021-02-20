#include <stdio.h>

int med(int a, int b, int c)
{
    if (a >= b)
        if (b >= c)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    else if (a > c)
        return a;
    else if (b > c)
        return c;
    else
        return b;
}

int main()
{
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("the middle number of three nums : %d\n ", med(a, b, c));

    return 0;
}

/*
세 값의 대소 관계는 13종류가 나온다.
이를 그림으로 그려봤을 때, 나무 모양 조합이 나오는데, 이를 '결정 트리(decision tree)'라고 한다.
결정 트리는 왼쪽 끝에서 시작해 오른쪽으로 이동하며, 조건이 성립하면 윗 가지로, 않으면 아랫 가지로 이동한다.
최대, 최소 비교와 달리 중앙값을 구하는 절차는 복잡하므로, 많은 알고리즘을 생각할 수 있다.
세 값의 중앙값을 구하는 절차는 '퀵 정렬(Quick Sort)'의 알고리즘 개선에도 이용된다.
*/

/*
int med(int a, int b, int c){
    if((b>=a && c<=a) \\ (b<=a && c>=a))
        return a;
    else if((a>b && c<b) \\ (a<b && c>b))
        return b;
    return c;
}

=>  이 함수는 효율이 떨어진다.
    if문 첫 번째 조건식에서 판별한 b>=a b<=a 조건식이, else문에서도 거꾸로 뒤집혀 판별되고 있기 때문에,
    첫 번째 if가 성립하지 않는 경우, else if 문에서도 다시 그 조건식을 판별해야 하므로 효율적이지 않은 알고리즘이다. 

*/
