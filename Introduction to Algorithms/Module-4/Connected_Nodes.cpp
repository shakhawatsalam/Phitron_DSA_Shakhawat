#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        sort(v[n].begin(), v[n].end(), greater<int>());
        if (v[n].empty())
        {
            cout << -1 << endl;
        }
        else
        {

            for (int x : v[n])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}