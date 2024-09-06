#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v[1005];
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    int q;
    cin >> q;
    if (!q)
        cout << "NO" << endl;
    while (q--)
    {

        bool flag = false;
        int node, dest;
        cin >> node >> dest;
        if (node == dest)
        {
            flag = true;
        }
        else
        {

            for (int x : v[node])
            {

                if (x == dest)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}