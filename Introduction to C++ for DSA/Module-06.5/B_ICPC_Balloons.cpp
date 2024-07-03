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
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int frq[26] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val = a[i] - 'A';
            if (frq[val] < 1)
            {
                sum += 2;
            }
            else
            {
                sum++;
            }

            frq[val]++;
        }
        cout << sum << endl;
    }
    return 0;
}
