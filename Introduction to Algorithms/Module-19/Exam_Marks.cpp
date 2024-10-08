#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int target_sum(int n, int sum, int a[])
{
    if (n == 0)
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }
    if (a[n - 1] <= sum)
    {
        int op1 = target_sum(n - 1, sum - a[n - 1], a);
        int op2 = target_sum(n - 1, sum, a);
        return dp[n][sum] = op1 + op2;
    }
    else
    {
        int op2 = target_sum(n - 1, sum, a);
        return dp[n][sum] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s1 = 1000 - target;
        memset(dp, -1, sizeof(dp));

        int flag = target_sum(n, s1, a);
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}