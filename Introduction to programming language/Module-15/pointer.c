#include <stdio.h>

int main()
{
    int a = 100;
    int *p = &a;
    int *p2 = p;
    *p2 = 200;
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p", &p2);
    return 0;
}