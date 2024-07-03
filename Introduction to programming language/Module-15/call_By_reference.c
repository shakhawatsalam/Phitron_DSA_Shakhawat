#include <stdio.h>

void fun(int *p)
{
    printf("P ar value %p\n", p);
}

int main()
{
    int x = 100;
    printf("X ar address %p\n", &x);
    fun(&x);
    return 0;
}