#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int n;
        scanf("%d", &n);
        char a[n];
        scanf("%s", a);
        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }

        if (t < p)
        {
            printf("Pathaan\n");
        }
        else if (p < t)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}