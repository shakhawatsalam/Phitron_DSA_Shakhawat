#include <stdio.h>

int main()
{

    int a;
    int b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int minus = a - b;
    int multi = a * b;
    double devid = (double)a / b;
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, minus);
    printf("%d * %d = %d\n", a, b, multi);
    printf("%d / %d = %0.2lf\n", a, b, devid);
}

// 10 + 3 = 13
// 10 - 3 = 7
// 10 * 3 = 30
// 10 / 3 = 3.33

// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50
