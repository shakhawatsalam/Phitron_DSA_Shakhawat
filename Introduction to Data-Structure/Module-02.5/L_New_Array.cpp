#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> ans;
    ans = v2;
    ans.insert(ans.end(), v.begin(), v.end());
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}