#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    head->next = a;
    a->next = b;

    Node *tmp = head;
    while (tmp != NULL)

    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    // cout << (*head).val << endl;
    // cout << (*(*head).next).val << endl;
    // cout << (*(*(*head).next).next).val << endl;

    return 0;
}