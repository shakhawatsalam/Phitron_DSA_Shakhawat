#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (st.size() != q.size())
    {
        flag = false;
    }
    else
    {

        while (q.empty() == false)
        {

            if (st.top() == q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}