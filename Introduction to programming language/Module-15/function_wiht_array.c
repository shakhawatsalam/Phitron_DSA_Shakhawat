#include <stdio.h>

void function(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i[ar]);
    }
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    function(ar, 5);
    return 0;
}