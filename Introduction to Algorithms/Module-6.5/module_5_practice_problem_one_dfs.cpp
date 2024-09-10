#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool vis[100];
int par[100];
bool flag = false;
void dfs(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    for (int child : adj[parent])
    {
        if (vis[child] && par[parent] != child)
        {
            flag = true;
        }
        if (!vis[child])
        {
            dfs(child);
            par[child] = parent;
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
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
        }
    }

    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}