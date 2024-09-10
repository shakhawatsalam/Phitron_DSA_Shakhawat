#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
int parentArray[100];
bool flag = false;
void dfs(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    for (int child : v[parent])
    {
        if (vis[child] && child != parentArray[parent])
        {
            flag = true;
        }
        if (!vis[child])
        {
            parentArray[child] = parent;
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

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
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