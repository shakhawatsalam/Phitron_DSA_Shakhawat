bool dfs(int v, bool visited[], bool recStack[], vector<int> adj[])
{

    visited[v] = true;
    recStack[v] = true;

    for (int child : adj[v])
    {

        if (!visited[child])
        {
            if (dfs(child, visited, recStack, adj))
            {
                return true;
            }
        }

        else if (recStack[child])
        {
            return true;
        }
    }

    recStack[v] = false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{

    bool *visited = new bool[V];
    bool *recStack = new bool[V];

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, visited, recStack, adj))
            {
                return true;
            }
        }
    }

    return false;
}