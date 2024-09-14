#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char v[1005][1005];
bool vis[1005][1005];

bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m && v[ci][cj] == '.' && !vis[ci][cj]);
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (auto child : d)
    {
        int ci = si + child.first;
        int cj = sj + child.second;
        if (isValid(ci, cj))
        {
            dfs(ci, cj);
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    if (v[si][sj] == '.' && v[di][dj] == '.')
    {
        dfs(si, sj);

        if (vis[di][dj])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}