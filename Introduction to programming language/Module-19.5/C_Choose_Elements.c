#include <stdio.h>

int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {

                long long int tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    long long int count = 0;

    for (int i = 0; i < k; i++)
    {

        if (a[i] < 0)
        {
            break;
        }
        count += a[i];
    }
    printf("%lld ", count);
    return 0;
}