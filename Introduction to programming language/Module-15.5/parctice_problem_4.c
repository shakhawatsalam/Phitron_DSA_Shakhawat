#include <stdio.h>

int change_it(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            arr[i] = 100;
        }
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    change_it(arr, n);

    return 0;
}