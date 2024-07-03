#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 60, 70};
    list<int> newList = {100, 200, 300, 400, 500};
    vector<int> v = {60, 70, 80};
    // myList.push_back(400);
    // myList.push_front(200);
    // cout << myList.front() << endl;
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 2), 100); // O(N)
    // myList.insert(next(myList.begin(), 2), {100, 200, 300}); // O(N)
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end()); // O(N)
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end()); // O(N)
    // myList.erase(next(myList.begin(), 2)); // O(N);
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5)); // O(N);
    // replace(myList.begin(), myList.end(), 30, 100);
    // myList.remove(30);
    // myList.sort();
    // myList.reverse();
    myList.unique(30);
    for (int x : myList)
    {
        cout << x << " ";
    }

    // auto it = find(myList.begin(), myList.end(), 100);
    // if (it == myList.end())
    // {
    //     cout << "NOT FOUND";
    // }
    // else
    // {

    //     cout << *it << " ";
    // }

    return 0;
    // list<int> newList;
    // // newList = myList;
    // newList.assign(myList.begin(), myList.end());
}