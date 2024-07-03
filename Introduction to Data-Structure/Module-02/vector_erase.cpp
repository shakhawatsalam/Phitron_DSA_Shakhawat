#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // v.erase(v.begin() + 3);
    // v.erase(v.begin() + 1, v.begin() + 4);
    v.erase(v.begin() + 1, v.end() - 2);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}