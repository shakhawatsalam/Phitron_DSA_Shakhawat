#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
const int maxW = 1000;
int db[maxN][maxW];
int kanpsack(int n, int weight[], int value[], int W)
{
    if (n < 0 || W == 0)
        return 0;
    if (db[n][W] != -1)
    {
        return db[n][W];
    }
    if (weight[n - 1] <= W)
    {
        // duta option
        // niya dhekbo, na niye dekhbo
        int op1 = kanpsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = kanpsack(n - 1, weight, value, W);

        return db[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = kanpsack(n - 1, weight, value, W);
        return db[n][W] = op2;
    }
}
int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int W;
    cin >> W;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            db[i][j] = -1;
        }
    }
    cout << kanpsack(n, weight, value, W) << endl;
    return 0;
}