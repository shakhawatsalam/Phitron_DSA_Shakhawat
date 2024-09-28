#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
pair<int, int> positionD;
bool found = false;
bool valid(int ci, int cj)
{

    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
};
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par.first, par.second};
                if (a[ci][cj] == 'D')
                {
                    positionD.first = ci;
                    positionD.second = cj;
                }
            }
        }
    }
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
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'R')
            {

                bfs(i, j);
            }
        }
    }

    if (positionD.first || positionD.second)
    {

        int sti = positionD.first;
        int stj = positionD.second;
        while (a[sti][stj] != 'R')
        {
            if (a[sti][stj] != 'D')
            {

                a[sti][stj] = 'X';
            }
            pair<int, int> par = parent[sti][stj];

            sti = par.first;
            stj = par.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}