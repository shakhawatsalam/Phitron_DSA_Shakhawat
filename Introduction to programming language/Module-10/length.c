#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int st = strlen(a);
    // int count = 0;
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    printf("%d\n", st);
    return 0;
}