#include <stdio.h>

int sumOfTwoValue(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int sum = sumOfTwoValue(10, 100);
    printf("%d", sum);
    return 0;
}