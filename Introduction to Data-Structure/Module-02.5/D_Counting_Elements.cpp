#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}