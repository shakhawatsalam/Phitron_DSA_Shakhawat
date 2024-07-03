#include <stdio.h>

int main()
{
    int g, c;
    scanf("%d %d", &g, &c);
    int gift = g / c;
    int rem = g % c;
    printf("%d %d", gift, rem);
    return 0;
}