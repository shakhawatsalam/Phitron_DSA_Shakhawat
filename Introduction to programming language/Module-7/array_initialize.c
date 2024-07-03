#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int a = 0;
    for (int i = 4; i >= 0; i--)
    {
        a += arr[i];
        printf("%d\n", arr[i]);
    }
    printf("%d\n", a);

    return 0;
}