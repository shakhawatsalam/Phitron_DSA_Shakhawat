#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10, 20, 30};
    x.pop_back();
    // vector<int> v = {1, 2, 3};
    // v = x; // * if size same O(1) if size is different O(N);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}