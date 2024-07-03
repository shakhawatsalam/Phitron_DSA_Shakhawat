#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int k;
    scanf("%d", &k);
    int arrtwo[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arrtwo[i]);
    }

    printf("\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arrtwo[i]);
    }
    int ans[n + k];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    printf("\n");

    int i = n;
    for (int j = 0; j < k; j++)
    {
        ans[i] = arrtwo[j];
        i++;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}
