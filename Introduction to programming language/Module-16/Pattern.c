#include <stdio.h>

int main()
{
    int n, space1, space2, hash, deash;
    scanf("%d", &n);
    hash = 1;
    space1 = n - 1;
    space2 = n - 2;
    deash = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < hash; j++)
        {
            printf("#");
        }
        printf("\n");
        // if (n > 3)
        // {
            for (int j = 1; j <= space2; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < deash; j++)
            {
                printf("-");
            }
        // }
        printf("\n");
        if (n % 2 != 0)
        {

            if (i <= (n / 2))
            {
                hash += 4;
                space1 -= 2;
                deash += 4;
                space2 -= 2;
            }
            if (i >= (n / 2))
            {
                deash -= 4;
                space2 += 2;
            }
            if (i > (n / 2))
            {
                hash -= 4;
                space1 += 2;
            }
        }
        else
        {
            if (i < (n / 2))
            {
                hash += 4;
                space1 -= 2;
                deash += 4;
                space2 -= 2;
            }
            if (i >= (n / 2))
            {
                deash -= 4;
                space2 += 2;
            }
            if (i > (n / 2))
            {
                hash -= 4;
                space1 += 2;
            }
        }
    }
    return 0;
}