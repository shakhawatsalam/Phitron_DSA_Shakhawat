#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool vis[100];
int par[100];
bool flag = false;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj[parent])
        {
            if (vis[child] && child != par[parent])
            {
                flag = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                par[child] = parent;
            }
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
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            bfs(i);
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