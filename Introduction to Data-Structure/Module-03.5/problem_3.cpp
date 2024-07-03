#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a, a + n);
    // cout << q;
    while (q--)
    {
        // cout << " Hello " << endl;
        int k;
        cin >> k;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == k)
            {
                flag = true;
                break;
            }
            if (k > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == true)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}