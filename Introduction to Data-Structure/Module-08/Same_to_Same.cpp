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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void compare(Node *head, Node *head_two)
{
    Node *tmp = head;
    Node *tmp_two = head_two;
    vector<int> v;
    vector<int> v2;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    while (tmp_two != NULL)
    {
        v2.push_back(tmp_two->val);
        tmp_two = tmp_two->next;
    }
    if (v == v2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t = 2;
    Node *head = NULL;
    Node *tail = NULL;
    Node *head_two = NULL;
    Node *tail_two = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int val_two;
    while (true)
    {
        cin >> val_two;
        if (val_two == -1)
            break;
        insert_at_tail(head_two, tail_two, val_two);
    }
    compare(head, head_two);

    return 0;
}