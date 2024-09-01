#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for (int i = 0; i < mat[1].size(); i++)
    {
        cout << mat[1][i] << " ";
    }
    // for (int x : mat[0])
    // {
    //     cout << x << " ";
    // }
    return 0;
}

// * Adjacency List
/**
 * Step - 1: take input of N(NODE) and E(Edge)--> int n,e; cin >> n >> e;
 * Step - 2: Run a while loop with e(edge) --> while(e--) {};
 * Step - 3: Declare input a and b inside the loop and take input --> while(e--) { int a, b; cin >>a>>b;};
 * Setp - 4: Initialize a array of vector --> vector<int> arr[n];
 * Setp - 5: Push b into mat's a index and push b into mat's a index --> mat[a].push_back(b);  mat[b].push_back(a);
 * Step - 6: If we want to make directed graph we don't need to push mat[b].push_back(a);
 */