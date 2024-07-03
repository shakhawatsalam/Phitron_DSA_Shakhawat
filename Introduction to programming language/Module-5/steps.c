#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int ans = x / 3;

    if (x % 3 != 0)
    {
        ans++;
    }

    printf("%d", ans);
    return 0;
}