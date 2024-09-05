
class Solution
{
public:
    int vis[10005];
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        // Code here
        queue<int> q;
        q.push(V);
        vis[V] = true;
        while (!q.empty())
        {
            int par = q.front();
            q.pop();
            ans.push_back(par);
            for (int child : v[par])
            {
                if (!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
    }
};