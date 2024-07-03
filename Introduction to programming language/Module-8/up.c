#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, v;
    scanf("%d %d\n", &x, &v);
    for (int i = n - 1; i >= 0; i--)
    {
        if (x == i)
        {
            arr[i] = v;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}