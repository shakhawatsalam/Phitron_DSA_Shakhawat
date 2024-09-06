#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
int c = 0;
void dfs(int src)
{
    c++;
    vis[src] = true;
    for (int child : v[src])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
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
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans.push_back(c);
            c = 0;
        }
    }
    sort(ans.begin(), ans.end());
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}