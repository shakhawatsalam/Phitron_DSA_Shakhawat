#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; n >= i; i = i + 2)
    {
        int num = n * (n + 1) / 2;
        printf("%d\n", num);
    }


    return 0;
}