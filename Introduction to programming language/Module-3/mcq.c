#include <stdio.h>

int main()

{
    long long int n;
    scanf("%lld", &n);
    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        long long int money = n - 1000;
        if (money >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}