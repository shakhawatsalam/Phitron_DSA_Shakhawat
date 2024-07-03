#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);

        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        int b = 0;
        for (int i = 0; i < a; i++)
        {
            if (x == arr[i])
            {
                b = 1;
            }
        }
        if (b == 1)
        {

            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}