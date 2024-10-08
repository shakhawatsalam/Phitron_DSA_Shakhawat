#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool Chocolates(int n, int s, int a[])
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = Chocolates(n - 1, s - a[n - 1], a);
        bool op2 = Chocolates(n - 1, s, a);
        dp[n][s] = op1 || op2;
        return dp[n][s];
    }
    else
    {
        bool op2 = Chocolates(n - 1, s, a);
        dp[n][s] = op2;
        return dp[n][s];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0 && sum <= 2000)
        {
            

            int s1 = sum / 2;
            memset(dp, -1, sizeof(dp));
            bool flag = Chocolates(n, s1, a);
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
  
    }

    return 0;
}