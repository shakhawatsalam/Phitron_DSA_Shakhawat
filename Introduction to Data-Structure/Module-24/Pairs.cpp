#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        else
        {
            return a.first > b.first;
        }
    };
};
int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int r;
        cin >> s;
        cin >> r;
        pq.push({s, r});
    }
    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}