#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int child : v[par])
        {
            if (!vis[child])
            {

                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        };
    };
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << endl;
    }
    return 0;
}

//--->  Bfs Traversal with level
/**
 * Step 1 : First take input of n(Node) and e(edge) --> int n,e; cin >> n >> e;
 * Step - 2: Run a while loop with e(edge) --> while(e--) {};
 * Step - 3: Declare input a and b inside the loop and take input --> while(e--) { int a, b; cin >>a>>b;};
 * Setp - 4: Initialize a array of vector globally size of the array would be decided accroding to input and question --> vector<int> arr[n];
 * Setp - 5: Push b into mat's a index and push b into mat's a index --> mat[a].push_back(b);  mat[b].push_back(a);
 * Step - 6 : Initialize source (src) and take input --> int src, cin >> src;
 * Step - 7 : Call bfs function with src --> bfs(src) it is a void function;
 * Step - 8 : Initialize a array of bool globally set all the value of the array with false befor calling bfs function (size is accroding to the vector size)  ---> bool vis[1005] --> globally--> set false--> memset(vis, false, sizeof(vis));
 * Step - 9 : Initialize a queue in bsf function --> queue<int> q;
 * Step - 10 : Push the src value in the the queue and also change the value of vis array in src index with true and make the level of srd equal to 0 --> q.push(src); vis[src]=true; level[src]= 0;
 * Step - 11 : Run a while loop until queue is not empty --> while(!q.empty()){};
 * Step - 12 : Take the parent form the queue from the and pop it --> int par = q.front(); q.pop();
 * Step - 13 : Print the parent --> cout << p << endl;
 * Step - 14 : run a for loop for getting the children for the array of vector  --> for(int i = 0; i < v[par].size(); i++){};/ for(int child: v[par]){};
 * Step - 15 : Check the children is visited or not and if not visited then push them into the queue and make the child viseted/true and increase the level of the chield; -- > if(!vis[child]){q.push(child), vis[child]= true}; level[child]= level[par]+1;
 * Step - 16 : Initialize a array of int for tracking the level globally --> int level[1005] size accroding to vector size and bool array size;
 * Setp - 17 : befor printing the level for not printing garbage value we can set all the level value into -1 using memset function --> memset(level,0,sizeof(level));
 */