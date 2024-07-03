#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // double x;
    // scanf("%lf", &x);

    // int ans = ceil(x);
    // int fol = floor(x);
    // int rou = round(x);
    // double squ = sqrt(x);
    // int po = pow(x);
    // printf("%d\n", ans);
    // printf("%d\n", fol);
    // printf("%d\n", rou);
    // printf("%d\n", po);
    // printf("%0.2lf\n", squ);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // int ans = pow(a, b);
    // printf("%d\n", ans);
    int x;
    scanf("%d", &x);
    int ans = abs(x);
    printf("%d\n", x * -1);
    printf("%d\n", ans);
    int *a = &ans;
    printf("%d\n", a);

    return 0;
}