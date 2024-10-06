#include <bits/stdc++.h>
using namespace std;
int n, m;
int mat[11][11];
int rec(int si, int sj)
{
    if (si == n - 1 && sj == m - 1)
    {
        // cout << si << " " << sj << endl;
        return mat[si][sj];
    }
    else if (si >= n || sj >= m)
    {
     
        return -10000000;
    }
    int down = rec(si + 1, sj);
    int right = rec(si, sj + 1);
    return mat[si][sj] + max(down, right);
}
int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << rec(0, 0);
    return 0;
}