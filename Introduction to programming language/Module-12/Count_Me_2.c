#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int con = 0;
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            con++;
        }
    }
    printf("%d \n", con);

    return 0;
}