#include <stdio.h>

void fun(int x)
{
    printf("fun x ar address %p\n", &x);
}

int main()
{
    int x = 10;
    printf("main x ar address %p\n", &x);
    fun(x);
    printf("main x ar value %p\n", &x);
    return 0;
}