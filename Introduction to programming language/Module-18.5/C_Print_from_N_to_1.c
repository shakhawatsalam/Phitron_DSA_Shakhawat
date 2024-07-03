#include <stdio.h>

void NToOne(int n)
{
    if (n == 0)
        return;

    printf("%d", n);
    if (n != 1)
    {
        printf(" ");
    }
    NToOne(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    NToOne(n);
    return 0;
}