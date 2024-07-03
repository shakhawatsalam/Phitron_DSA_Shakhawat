#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 10, 20, 10, 30, 40, 50, 10};
    // myList.remove(10); // O(N)
    myList.sort();
    // myList.sort(greater<int>());
    myList.unique(); // O(NlogN)
    // myList.reverse();
    for (int x : myList)
    {
        cout << x << endl;
    }
    return 0;
}