#include <stdio.h>
#include <limits.h>
int max(int *a, int n, int i)
{
    // base case
    if (n == i)
    {
        return INT_MIN;
    }
    int m = max(a, n, i + 1);
    if (a[i] > m)
    {
        return a[i];
    }
    else
    {
        return m;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = max(a, n, 0);
    printf("%d", ans);
    return 0;
}