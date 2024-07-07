#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        if (x == 0)
        {
            myList.push_front(val);
        }
        else if (x == 1)
        {

            myList.push_back(val);
        }
        else if (x == 2)
        {
            if (val < myList.size())
            {

                myList.erase(next(myList.begin(), val));
            }
        }
        cout << "L -> ";
        for (int x : myList)
        {
            cout << x << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (int x : myList)
        {
            cout << x << " ";
        }
        cout << endl;
        myList.reverse();
    }
    return 0;
}