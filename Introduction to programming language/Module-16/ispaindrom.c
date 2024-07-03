#include <stdio.h>
#include <string.h>
int is_palindrome(char *a)
{
    int i = 0;
    int j = strlen(a) - 1;
    int count = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            count = 0;
        }
        i++;
        j--;
    }
    return count;
}

int main()
{
    char a[1001];
    scanf("%s", a);

    int IsPalindrom = is_palindrome(a);

    if (IsPalindrom)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}