#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s", &a);
    
    int i = 0;
    int j = strlen(a) - 1;
    int k;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        i++;
        j--;
    }

    if (k == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}