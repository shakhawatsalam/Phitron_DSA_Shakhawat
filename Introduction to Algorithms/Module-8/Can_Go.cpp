#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<pair<int, long long int>> v[N];
const long long int INF = 1e18 + 5;
long long int dis[N];

class cmp
{
public:
    bool operator()(pair<long long int, long long int> a, pair<long long int, long long int> b)
    {
        return a.second > b.second;
    }
};


void dijkstra(int src)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, cmp> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<long long int, long long int> parent = q.top();
        q.pop();
        int node = parent.first;
        long long int cost = parent.second;

        for (pair<int, long long int> child : v[node])
        {
            int childNode = child.first;
            long long int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
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
        long long int c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    int src;
    cin >> src;

 
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }


    dijkstra(src);

    
    int t;
    cin >> t;

  
    while (t--)
    {
        int d;
        long long int w;
        cin >> d >> w;

       
        if (dis[d] <= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
