#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char a[101];
    for (int i = 0; i < t; i++)
    {

        scanf("%s", a);
        int len = strlen(a);
        if (len > 10)
        {
            printf("%c%d%c\n", a[0], len - 2, a[len - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }
}