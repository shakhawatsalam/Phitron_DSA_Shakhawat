#include <stdio.h>

int main()
{
    int x = 0;
    printf("%p\n", &x);
    int *p = &x;
    printf("%p\n", p);
    // dereference
    printf("%d\n", *p=500+2);

    return 0;
}