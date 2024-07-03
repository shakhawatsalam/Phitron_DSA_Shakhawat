#include <stdio.h>
#include <string.h>
void fun(char *ar)
{
    int size = sizeof(ar) / sizeof(char);
    printf("%d", strlen(ar));
}

int main()
{
    char ar[6] = "Hello";
    fun(ar);
    // int size = sizeof(ar) / sizeof(char);
    // printf("%d", size);
    return 0;
}