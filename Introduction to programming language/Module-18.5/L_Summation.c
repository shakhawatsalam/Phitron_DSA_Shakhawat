#include <stdio.h>
long long int summation(long long int *a, long long int n, long long int i, long long int sum)
{
    if (i == n)
    {
        return sum;
    }

    sum += a[i];
    summation(a, n, i + 1, sum);
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    long long int ans = summation(arr, n, 0, sum);
    printf("%lld", ans);

    return 0;
}