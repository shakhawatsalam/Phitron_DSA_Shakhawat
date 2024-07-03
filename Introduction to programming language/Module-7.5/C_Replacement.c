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
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", 1);
        }
        else if (arr[i] == 0)
        {
            printf("%d ", 0);
        }

        else
        {
            printf("%d ", 2);
        }
    }
    return 0;
}