#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char t[1000];
    scanf("%s %s", &s, &t);
    int sLength = strlen(s);
    int tLength = strlen(t);
    printf("%d %d\n", sLength, tLength);
    printf("%s %s", s, t);

    return 0;
}