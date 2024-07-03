#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    // * With Function
    strcat(a, b);
    // * With out Function
    // int k = strlen(a);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }
    // * Copy only two value form b
    // int k = strlen(a);
    // for (int i = 0; i <= 2; i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }
    // a[k] = '\0';
    printf("%s", a);
    return 0;
}