#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
 
    long long int count = 0;
    for (int i = 0; n >= i; i++)
    {
        count = count + i;
    }
    printf("%lld", count);
    return 0;
}