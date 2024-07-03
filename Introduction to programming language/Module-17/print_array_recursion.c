#include <stdio.h>
#include <string.h>
void fun(int *ar, int n, int i)
{
    // *  base case
    if (i == n)
    {

        return;
    }
    printf("%d\n", ar[i]);
    fun(ar, n, i + 1);
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

    fun(arr, n, 0);
    return 0;
}