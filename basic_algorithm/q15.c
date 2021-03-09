#include <stdio.h>

int main()
{
    int w, h, i, j;
    printf("높이: ");
    scanf("%d", &h);
    printf("너비: ");
    scanf("%d", &w);

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}