#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            flag = false;
        }
        s.pop();
        q.pop();
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}