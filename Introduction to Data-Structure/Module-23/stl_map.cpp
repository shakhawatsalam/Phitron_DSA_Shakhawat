#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp["shawon"] = 1000000;
    // mp["karim"] = 500000;
    // mp["Abd villers"] = 17;
    mp.insert(make_pair("hello", 50));
    // mp.insert({"sakib al hasan", 75});
    // mp.insert({"Babar asam", 10});
    // mp.insert({"Abd villers", 0});
    // mp.insert({"Gayl", 333});

    // if (mp.count("Abd villers"))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}