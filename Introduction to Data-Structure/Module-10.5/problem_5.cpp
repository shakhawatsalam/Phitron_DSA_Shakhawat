#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
};

// * Sort ascending
void sort_ascendeng(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        Node *tmp_tow = tmp->next;
        while (tmp_tow != NULL)
        {

            if (tmp->val > tmp_tow->val)
            {
                swap(tmp->val, tmp_tow->val);
            }
            tmp_tow = tmp_tow->next;
        }
        tmp = tmp->next;
    }
}

// * print_linked_list_forward
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// * print_linked_list_backward
void print_linked_list_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // *Print Linked List
    // print_linked_list(head);
    sort_ascendeng(head);
    print_linked_list(head);

    // print_linked_list_backward(tail);

    return 0;
}