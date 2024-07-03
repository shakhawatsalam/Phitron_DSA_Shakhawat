#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int pos = 0, neg = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] >= 0)
        {
            pos += arr[i];
        }
        else
        {
            neg += arr[i];
        }
    }
    printf("%d %d", pos, neg);
    return 0;
}