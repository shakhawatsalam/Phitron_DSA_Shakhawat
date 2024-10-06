#include <bits/stdc++.h>
using namespace std;
int weight[55];
int value[1005];
const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];
int knapsack(int n, int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n] <= W)
    {
        int opt1 = knapsack(n - 1, W - weight[n]) + value[n];
        int opt2 = knapsack(n - 1, W);
        return dp[n][W] = max(opt1, opt2);
    }
    else
    {
        int opt2 = knapsack(n - 1, W);
        return dp[n][W] = opt2;
    }
};
int main()
{
    int n, W;
    cin >> n >> W;
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    memset(dp, -1, sizeof(dp));
    int ans = knapsack(n, W);
    cout << ans << endl;

    return 0;
}