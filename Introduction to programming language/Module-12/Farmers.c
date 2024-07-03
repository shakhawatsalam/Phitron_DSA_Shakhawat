#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int sum = m1 + m2;
        int a = (m1 * d) / sum;
        printf("%d\n", d - a);
    }

    return 0;
}
// int ans = (10 * 15) / 15;
// printf("test%d\n", 15 - ans);
// int ans1 = (4 * 5) / 4;
// printf("%d\n", 5 - ans1);
// int ans2 = (4 * 5) / 5;
// printf("%d\n", 5 - ans2);
// int ans3 = (1 * 7) / 1007;
// printf("%d\n", 1 - ans3);