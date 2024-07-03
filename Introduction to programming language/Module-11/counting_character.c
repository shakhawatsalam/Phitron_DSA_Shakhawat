#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        cnt[value]++;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 97, cnt[i]);
        }
    }
    return 0;
}