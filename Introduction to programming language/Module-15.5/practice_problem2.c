#include <stdio.h>
#include <string.h>
int my_len(char *a)
{
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[20];
    scanf("%s", a);
    int ans = my_len(a);
    printf("%d", ans);
    return 0;
}