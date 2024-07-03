#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40};
    // cout << myList.max_size();
    // myList.clear();
    myList.resize(2);
    myList.resize(5, 100);
    cout << myList.size() << endl;
    for (int x : myList)
    {
        cout << x << " ";
    }
    return 0;
}