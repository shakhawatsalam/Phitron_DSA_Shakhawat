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
    int x;
    scanf("%d", &x);
    int position = -1;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {

            position = i;
            break;
        }
    }
    if (position >= 0)
    {
        printf("%d\n", position);
    }
    else
    {
        printf("%d\n", -1);
    }
    return 0;
}