#include <bits/stdc++.h>
using namespace std;
int main()
{
    // * replace
    // vector<int> v = {1, 2, 2, 5, 5, 4, 9, 6, 4, 5, 2};
    // replace(v.begin(), v.end() - 1, 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // * find
    vector<int> v = {1, 2, 2, 5, 5, 4, 9, 6, 4, 5, 2};
    auto it = find(v.begin(), v.end(), 22);
    // cout << *it;
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}