#include <stdio.h>

void fun(int *ar, int n)
{
    ar[0] = 500;
    *(ar + 1) = 700;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", i[ar]);
    // }
    // printf("\n aga");
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    fun(ar, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i[ar]);
    }
    return 0;
}