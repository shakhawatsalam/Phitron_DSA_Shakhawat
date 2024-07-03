#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d", even, odd);
}

int main()
{
    odd_even();
    return 0;
}