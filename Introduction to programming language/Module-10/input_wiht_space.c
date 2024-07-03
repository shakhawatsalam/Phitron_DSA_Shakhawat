#include <stdio.h>
#include <string.h>

int main()
{
    char a[16];
    fgets(a, 16, stdin);
    printf("%s", a);
    return 0;
}