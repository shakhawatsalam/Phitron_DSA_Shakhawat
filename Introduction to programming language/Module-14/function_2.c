#include <stdio.h>

int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}

int main()
{
    int ss = sum();
    printf("%d", ss);
    return 0;
}