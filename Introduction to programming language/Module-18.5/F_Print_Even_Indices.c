#include <stdio.h>

void printEvenIndices(int *a, int n, int i)
{
    if (i == n)
    {
        return;
    }
    printEvenIndices(a, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
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
    printEvenIndices(arr, n, 0);
    return 0;
}