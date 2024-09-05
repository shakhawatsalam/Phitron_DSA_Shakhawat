#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    if (mat[3][4] == 1)
        cout << "connected" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

// * Adjacency Matrix
/**
 * Step-1 : First take input of Node and Edge --> int n, e; cin >> n >> e;
 * Step-2 : Initialize a matrix it's size will be accordding to size of node and initialize the matrix with the zero(0) using memset function --> int mat[n][n]; memset(mat, 0, sizeof(mat));
 * Step-3 : Run a While loop using the value of (e) Edge --> while(e--) {};
 * Step-4 : take input of node in while loop --> while(e--) { int a, b; cin >> a >> b;}
 * Step-5 : Put value one(1) into the mat[a][b] = 1 cell and mat[b][a] = 1;
 * Step-6 : If it's directed Graph we don't need to connect the mat[b][a] = 1;
 * */