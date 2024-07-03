#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int taka = x - y;
    int total = taka / 2;

    printf("%d %d", total + y, total);

    return 0;
}