#include <stdio.h>

void solve()
{
    int k;
    scanf("%d", &k);
    int arr[4];
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[k] == 0)
    {
        printf("NO\n");
        return;
    }
    k = arr[k];
    if (arr[k] == 0)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}