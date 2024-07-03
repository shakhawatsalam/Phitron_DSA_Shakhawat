#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 10 || n <= 99)
    {

        int a = n / 10;
        int mod = n % 10;
        if (mod != 0)
        {

            if (a % mod == 0 || mod % a == 0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }else{
            printf("YES");
        }
    }
    return 0;
}