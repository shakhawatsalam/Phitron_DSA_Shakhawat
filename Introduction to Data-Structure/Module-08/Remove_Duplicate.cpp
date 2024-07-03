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



void remove_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        Node *tmp_two = tmp;
        while (tmp_two->next != NULL)
        {
            if (tmp->val == tmp_two->next->val)
            {
                Node *deleteNode = tmp_two->next;
                tmp_two->next = tmp_two->next->next;
                delete deleteNode;
            }
            else
            {
                tmp_two = tmp_two->next;
            }
        }
        tmp = tmp->next;
    }
}

void print_linded_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
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
    remove_duplicate(head);

    print_linded_list(head);
    return 0;
}