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

int search(Node *head, int x)
{
    Node *tmp = head;
    vector<int> v;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int index = search(head, x);
        cout << index << endl;
    }

    return 0;
}