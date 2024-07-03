#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr2[m + 1];
    for (int i = 0; i <= m; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}