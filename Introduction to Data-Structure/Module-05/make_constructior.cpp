#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10);
    Node b(25);

    a.next = &b;

    cout << a.value << endl;
    cout << (*a.next).value << endl; // * same
    cout << a.next->value << endl;   // * same
    return 0;
}