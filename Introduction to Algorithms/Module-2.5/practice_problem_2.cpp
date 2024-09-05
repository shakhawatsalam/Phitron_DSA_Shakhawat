#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
int level[100];
vector<int> ans;
void bfs(int src, int l)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        if (l == level[par])
        {
            ans.push_back(par);
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
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
    int l;
    cin >> l;

    memset(vis, false, sizeof(vis));
    bfs(0, l);
    reverse(ans.begin(), ans.end());
    for (int x : ans)
    {
        cout << x << ' ';
    }
    return 0;
}