#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int n;
        while (cin >> n)
        {
            cin.ignore();
            string name;
            if (n == 0)
            {

                getline(cin, name);
            }
            if (n == 0)
            {

                q.push(name);
            }
            else if (n == 1)
            {
                if (q.empty())
                {
                    cout << "Invalid" << endl;
                }
                else
                {
                    cout << q.front() << endl;
                    q.pop();
                }
            }
        }
    }

    return 0;
}