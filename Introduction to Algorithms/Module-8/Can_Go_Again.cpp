#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v;
    long long int c;
    Edge(int u, int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1005;
long long int dist[N];
const long long int INF = 1e18 + 5;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        int u, v;
        long long c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src;

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            if (dist[ed.u] != INF && dist[ed.u] + ed.c < dist[ed.v])
            {
                dist[ed.v] = dist[ed.u] + ed.c;
            }
        }
    }

    bool negativeCycle = false;
    for (Edge ed : EdgeList)
    {
        if (dist[ed.u] != INF && dist[ed.u] + ed.c < dist[ed.v])
        {
            negativeCycle = true;
            break;
        }
    }

    if (negativeCycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int des;
        cin >> des;

        if (dist[des] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[des] << endl;
        }
    }

    return 0;
}
