// #include <stdio.h>

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int arr[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[a[i]]++;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         if (arr[i] > 0)
//         {
//             printf("%d\n", arr[i]);
//         }
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int max_value = 0; // Variable to store the maximum value in arr
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    // Ensure that m does not exceed the maximum value in arr
    if (m > max_value)
    {
        m = max_value;
    }

    int arr2[6] = {0};
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    for (int i = 0; i <= m; i++)
    {
        if (arr2[i] > 0)
        {
            printf("%d\n", arr2[i]);
        }
    }

    return 0;
}