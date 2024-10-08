#include <bits/stdc++.h>
using namespace std;
long long int input;
int dp[100005];
bool make_it(int n)
{

    if (n > input)
    {
        return false;
    }
    if (n == input)
    {
        return true;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = make_it(n + 3) || make_it(n * 2);
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> input;
        memset(dp, -1, sizeof(dp));

        bool flag = make_it(1);
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