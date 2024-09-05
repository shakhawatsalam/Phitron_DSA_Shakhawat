#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int dist[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0; // Start distance from source to itself is 0

    while (!q.empty())
    {
        int par = q.front(); //  2
        q.pop();

        for (int child : v[par]) // 0
        {
            if (dist[child] == -1) // yes - 1
            { // If the child hasn't been visited
                dist[child] = dist[par] + 1; // dis[par] = 1 + 1
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    // Building the graph
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int src, des;
        cin >> src >> des;

        // Initialize distance array to -1 (unvisited)
        memset(dist, -1, sizeof(dist));

        bfs(src);

        cout << dist[des] << endl; // Output the distance or -1 if unreachable
    }

    return 0;
}
