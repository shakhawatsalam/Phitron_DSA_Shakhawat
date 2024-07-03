#include <stdio.h>

void oneToN(int n)
{
    if (n == 0)
        return;
    oneToN(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    oneToN(n);
    return 0;
}