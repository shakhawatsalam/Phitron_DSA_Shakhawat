// #include <bits/stdc++.h>
// using namespace std;
// char a[1005][1005];
// bool vis[1005][1005];
// map<pair<int, int>, pair<int, int>> parent;
// int dx[4] = {0, 0, -1, 1};
// int dy[4] = {1, -1, 0, 0};
// int n, m;
// pair<int, int> positionR;
// bool valid(int ci, int cj)
// {

//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// };
// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     while (!q.empty())
//     {
//         pair<int, int> par = q.front();
//         q.pop();

//         for (int i = 0; i < 4; i++)
//         {
//             int ci = par.first + dx[i];
//             int cj = par.second + dy[i];

//             if (valid(ci, cj) && !vis[ci][cj])
//             {
//                 vis[ci][cj] = true;
//                 q.push({ci, cj});
//                 parent[{ci, cj}] = {par.first, par.second};
//                 if (a[ci][cj] == 'R')
//                 {
//                     positionR.first = ci;
//                     positionR.second = cj;
//                     break;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     memset(vis, false, sizeof(vis));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == 'D')
//             {

//                 bfs(i, j);
//             }
//         }
//     }

//     if (positionR.first)
//     {

//         int sti = positionR.first;
//         int stj = positionR.second;
//         while (a[sti][stj] != 'D')
//         {
//             if (a[sti][stj] != 'R')
//             {

//                 a[sti][stj] = 'X';
//             }

//             int Nsti = parent[{sti, stj}].first;
//             stj = parent[{sti, stj}].second;

//             sti = Nsti;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point
{
    int x, y;
};

// Directions: right, left, up, down
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

// Function to check if the move is within bounds and on a valid path (i.e., '.')
bool isValidMove(int x, int y, int n, int m, const vector<vector<char>> &maze, const vector<vector<bool>> &visited)
{
    return x >= 0 && y >= 0 && x < n && y < m && maze[x][y] != '#' && !visited[x][y];
}

void solveMaze(vector<vector<char>> &maze, int n, int m)
{
    queue<Point> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<Point>> parent(n, vector<Point>(m, {-1, -1}));

    Point start, end;

    // Find start 'R' and end 'D'
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (maze[i][j] == 'R')
            {
                start = {i, j};
            }
            else if (maze[i][j] == 'D')
            {
                end = {i, j};
            }
        }
    }

    // BFS from the starting point 'R'
    q.push(start);
    visited[start.x][start.y] = true;

    bool found = false;

    while (!q.empty())
    {
        Point current = q.front();
        q.pop();

        // If we reach the destination 'D', exit the loop
        if (maze[current.x][current.y] == 'D')
        {
            found = true;
            break;
        }

        // Try moving in all four directions: right, left, up, down (as per the problem statement)
        for (int i = 0; i < 4; ++i)
        {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (isValidMove(nx, ny, n, m, maze, visited))
            {
                visited[nx][ny] = true;
                parent[nx][ny] = current; // Store parent to trace the path later
                q.push({nx, ny});
            }
        }
    }

    // If a path to 'D' was found, backtrack from 'D' to 'R' and mark the path with 'X'
    if (found)
    {
        Point trace = end;
        while (trace.x != start.x || trace.y != start.y)
        {
            if (maze[trace.x][trace.y] != 'D')
            { // Don't overwrite the 'D'
                maze[trace.x][trace.y] = 'X';
            }
            trace = parent[trace.x][trace.y]; // Move to the parent
        }
        maze[start.x][start.y] = 'R'; // Re-mark 'R' as start
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> maze(n, vector<char>(m));

    // Read the maze
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> maze[i][j];
        }
    }

    // Solve the maze and output the result
    solveMaze(maze, n, m);

    // Print the modified maze
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}


