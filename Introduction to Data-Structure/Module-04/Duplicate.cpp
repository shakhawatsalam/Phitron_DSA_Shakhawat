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
    vector<int> v;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), a[i]);
        if (it != v.end())
        {
            flag = true;
        }
        else if (it == v.end())
        {
            v.push_back(a[i]);
        }
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}