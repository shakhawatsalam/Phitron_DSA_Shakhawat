#include <stdio.h>
#include <string.h>
int main()
{
    char a;
    int f[26] = {0};

    while (scanf("%c", &a) != EOF)
    {
        f[a - 97]++;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (f[i] > 0)
        {

            printf("%c : %d\n", i + 97, f[i]);
        }
    }

    return 0;
}