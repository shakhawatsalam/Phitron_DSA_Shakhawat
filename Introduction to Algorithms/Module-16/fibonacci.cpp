#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
int fibo(int n)
{
    // if (n == 0 || n == 1)
    // {
    //     return n;
    // }
    if (n <= 1)
    {
        return n;
    }
    // if (dp[n] != -1)
    // {
    //     return dp[n];
    // }
    int ans = fibo(n - 1) + n;
    // dp[n] = ans;
    return ans;
}
//   2^N
int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibo(n) << endl;
    return 0;
}