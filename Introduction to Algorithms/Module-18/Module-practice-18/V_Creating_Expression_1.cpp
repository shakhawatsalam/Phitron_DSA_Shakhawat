#include <bits/stdc++.h>
using namespace std;
long long n, x;
long long arr[21];

bool check(long long sum, long long index)
{
    if (index == n)
        return sum == x;

    bool op1 = check(sum + arr[index], index + 1);
    bool op2 = check(sum - arr[index], index + 1);
    return op1 || op2;
}
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (check(arr[0], 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}