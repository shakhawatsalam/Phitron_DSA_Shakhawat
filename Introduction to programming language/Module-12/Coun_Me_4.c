#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int a[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 97;
        a[val]++;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (a[i] > 0)
        {

            printf("%c - %d\n", i + 97, a[i]);
        }
    }

    return 0;
}