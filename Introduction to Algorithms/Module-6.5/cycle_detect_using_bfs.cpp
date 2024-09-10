#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
int parent[100];
bool flag = false;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {

            if (vis[child] && child != parent[par])
            {
                flag = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            bfs(i);
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}