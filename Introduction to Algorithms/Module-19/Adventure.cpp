#include <bits/stdc++.h>
using namespace std;

int db[1005][1005];
int kanpsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
    {

        return 0;
    }
    if (db[n][W] != -1)
    {
        return db[n][W];
    }
    if (weight[n - 1] <= W)
    {
        int op1 = kanpsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = kanpsack(n - 1, weight, value, W);

        return db[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = kanpsack(n - 1, weight, value, W);
        return db[n][W] = op2;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int weight[n], value[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                db[i][j] = -1;
            }
        }
        cout << kanpsack(n, weight, value, w) << endl;
        }

    return 0;
}