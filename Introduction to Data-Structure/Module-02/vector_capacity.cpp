#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout << v.size() << endl;
    // cout << v.empty() << endl;
    // // v.push_back(60);
    // v.clear();
    v.resize(2);
    v.resize(6, 22);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v.capacity() << endl;

    return 0;
}