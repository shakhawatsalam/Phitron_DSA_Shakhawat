#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    int posmax, posmin;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            posmin = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            posmax = i;
        }
    }

    int tem;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            tem = a[i];
            a[i] = max;
            a[posmax] = tem;
        }
        if (a[i] == max)
        {
            tem = a[i];
            a[i] = min;
            a[posmin] = tem;
        }
        printf("%d ", a[i]);
    }

    return 0;
}