#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;


bool valid(int ci, int cj)
{

    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
};

int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int cnt = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '-')
            {

                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    return cnt;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (!vis[i][j] && a[i][j] == '.')
            {

                int area = bfs(i, j);
                ans = min(ans, area);
            }
        }
    }
    if (ans == INT_MAX)
    {

        cout << -1 << endl;
    }
    else
    {

        cout << ans << endl;
    }

    return 0;
}