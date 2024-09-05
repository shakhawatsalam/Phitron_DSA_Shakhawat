#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int m;
    cin >> m;
    int count = 0;
    for (int x : v[m])
    {
        count++;
    }
    cout << count;

    return 0;
}