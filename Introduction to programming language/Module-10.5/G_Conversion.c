#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    // printf("%d", 'z');
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] <= 'Z' && a[i] >= 'A')
        {

            printf("%c", a[i] + 32);
        }
        else if (a[i] <= 'z' && a[i] >= 'a')
        {
            printf("%c", a[i] - 32);
        }
        else if (a[i] == ',')
        {
            printf("%c", ' ');
        }
    }
    return 0;
}