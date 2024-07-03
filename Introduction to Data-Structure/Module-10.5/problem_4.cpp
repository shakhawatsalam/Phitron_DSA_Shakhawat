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
// * linked_list_size
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
// * insert at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
// * insert at tail

// * insert at any position
void insert_at_any_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    tmp->next = newNode;
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

    int t;
    cin >> t;
    while (t--)
    {

        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "INVALID" << endl;
        }
        else if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
            print_linked_list_backward(tail);
        }
        else if (pos == size(head))
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
            print_linked_list_backward(tail);
        }
        else
        {
            insert_at_any_pos(head, pos, val);
            print_linked_list(head);
            print_linked_list_backward(tail);
        }
    }
    // insert_at_any_pos(head, 1, 200);
    // print_linked_list(head);
    // print_linked_list_backward(tail);

    return 0;
}