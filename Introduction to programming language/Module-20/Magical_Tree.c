#include <stdio.h>

int main()
{
    int s = 0, k;
    scanf("%d", &k);
    s = ((5 * 2 + k) / 2) + 1;
    int ispace = ((5 * 2 + k) / 2) + 1;
    int star = 1;
    for (int i = 0; i < ispace; i++)
    {

        for (int j = 1; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        s -= 1;
        star += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}