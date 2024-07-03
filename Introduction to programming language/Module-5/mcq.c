#include <stdio.h>

int main()
{

    char ch;
    char s[100] = "Langage";
    char sen[100] = "Welcome To C!!";
    scanf("%c %s %s", &ch, &s, &sen);
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);

    return 0;
}