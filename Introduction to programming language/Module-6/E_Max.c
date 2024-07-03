#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {

        scanf("%d", &a);
        if (a >= count)
        {
            count = a;
        }
    }
    printf("%d", count);
    return 0;
}