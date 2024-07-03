#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nPositive");
    }
    else if (num < 0)
    {
        printf("\nNegative");
    }
    else
    {
        printf("\nZero");
    }
    return 0;
}