#include <bits/stdc++.h>
using namespace std;
int main()
{

    // * first method
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // * second method
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}