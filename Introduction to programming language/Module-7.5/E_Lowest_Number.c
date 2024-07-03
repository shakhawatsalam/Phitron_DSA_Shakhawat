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
    int value = __INT_MAX__;
    int position;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < value)
        {
            value = arr[i];
            position = i + 1;
        }
    }
    printf("%d %d", value, position);
    return 0;
}