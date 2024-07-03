#include <stdio.h>

int swap_It(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
    printf("%d %d\n", *a, *b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_It(&a, &b);
    return 0;
}