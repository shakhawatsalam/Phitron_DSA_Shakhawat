#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int tem = b[i];
                    b[i] = b[j];
                    b[j] = tem;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < n; i++)
        {

            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}