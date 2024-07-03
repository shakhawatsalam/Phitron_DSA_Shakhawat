#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    while (t--)
    {

        long long int m, a, b, c;
        m = a = b = c = 0;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int k = (a * b * c);
        if (m % k == 0)
        {

            printf("%d\n", m / k);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}