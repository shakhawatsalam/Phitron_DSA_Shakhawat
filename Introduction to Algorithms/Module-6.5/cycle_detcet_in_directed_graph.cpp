#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
bool pathVisit[100];

bool flag = false;

void dfs(int parent)
{
    vis[parent] = true;
    pathVisit[parent] = true;
    for (int child : v[parent])
    {
        if (pathVisit[child])
        {
            flag = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[parent] = false;
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
        // v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}