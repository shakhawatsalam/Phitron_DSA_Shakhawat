#include <bits/stdc++.h>
using namespace std;

int dist[105][105];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int bfs(int srcI, int srcJ, int desI, int desJ)
{
    queue<pair<int, int>> q;

    q.push({srcI, srcJ});
    dist[srcI][srcJ] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        if (a == desI && b == desJ)
        {
            return dist[a][b];
        }

        for (pair<int, int> child : d)
        {
            int ci = a + child.first;
            int cj = b + child.second;

            if (valid(ci, cj) && dist[ci][cj] == -1)
            {
                dist[ci][cj] = dist[a][b] + 1;
                q.push({ci, cj});
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;

        int si, sj;
        cin >> si >> sj;

        int di, dj;
        cin >> di >> dj;
        memset(dist, -1, sizeof(dist));
        if (si == di && sj == dj)
        {
            cout << 0 << endl;
        }
        else
        {

            int result = bfs(si, sj, di, dj);
            cout << result << endl;
        }
    }
    return 0;
}
