#include <bits/stdc++.h>
using namespace std;
// O(N)
int fact(int n)
{
    if (n == 0)
        return 1;

    int chotoFactorial = fact(n - 1);
    return chotoFactorial * n;
}
int main()
{
    int n;
    cin >> n;
    // cout << fact(n) << endl;
    int ans = 1;
    // O(N)
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans;
    return 0;
}