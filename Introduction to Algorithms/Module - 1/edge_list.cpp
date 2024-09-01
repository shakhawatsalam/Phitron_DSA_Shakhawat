#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v;
    while (e--)
    {

        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // for (pair<int, int> p : v)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}

// * Edge List
/**
 * Step 1 : take input of n(Node) and e(edge) --> int n, e; cin >> n >> e;
 * Step 2 : run a while loop with the value of e; --> while(e--){};
 * Step 3 : Declare input a and b inside the loop and take input --> while(e--) { int a, b; cin >>a>>b;};
 * Step 4 : Initialize a vector of pair --> vector<pair<int, int>> v;
 * Step 5 : push the value of a and b in the pair vector ---> v.push_back({a, b}) / v.push_back(make_pair(a, b));
 */