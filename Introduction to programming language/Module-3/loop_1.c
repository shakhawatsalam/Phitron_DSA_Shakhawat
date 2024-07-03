#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        count += i;
    }
    printf("%d\n", count);
    return 0;
}