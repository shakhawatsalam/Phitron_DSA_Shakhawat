#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}