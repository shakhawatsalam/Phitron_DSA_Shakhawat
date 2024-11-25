#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    int val = 1;
    for (int i = 0; i < n; i += 2)
    {
        arr[i] = val;
        arr[i + 1] = val;
        val++;
    }

    int prifixarr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        prifixarr[i] = prifixarr[i - 1] + arr[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
    
        cout << prifixarr[r] - prifixarr[l - 1] << endl;
    }

    return 0;
}
