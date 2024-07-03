#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    int arr2[3];
    arr2[0] = a;
    arr2[1] = b;
    arr2[2] = c;
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}