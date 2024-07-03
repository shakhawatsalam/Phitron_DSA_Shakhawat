#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout << myList.front() << endl;
    // cout << myList.back() << endl;
    for (int i = 0; i < myList.size(); i++)
    {
        cout << *next(myList.begin(), i) << " " << i << endl;
    }
    return 0;
}