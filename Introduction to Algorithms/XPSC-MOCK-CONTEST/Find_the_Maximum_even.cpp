#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxEven = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            maxEven = max(maxEven, arr[i]);
        }
    }
    int sum = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % 2 == 0)
            {
                
                sum = max(arr[i] + arr[j], sum);
            }
        }
    }
    if (sum != INT_MIN && sum > maxEven  )
    {

        cout << sum << endl;
    }
    else
    {
        cout << maxEven << endl;
    }

    return 0;
}