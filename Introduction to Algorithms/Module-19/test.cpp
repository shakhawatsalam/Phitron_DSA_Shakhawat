#include <bits/stdc++.h>
using namespace std;
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
            bool dp[n + 1][s1 + 1];
            dp[0][0] = true;
            for (int i = 1; i <= s1; i++)
                dp[0][i] = false;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s1; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            if (dp[n][s1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}