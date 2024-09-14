#include <bits/stdc++.h>
const long long int INF = 1e18 + 5;
using namespace std;

int main()
{
    long long int n, e;
    cin >> n >> e;

    long long int adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INF;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] < INF && adj[k][j] < INF)
                {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (adj[u][v] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[u][v] << endl;
        }
    }

    return 0;
}
