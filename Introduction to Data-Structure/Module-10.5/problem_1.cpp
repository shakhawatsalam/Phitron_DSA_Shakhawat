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

// * same or not
void same_or_not(Node *head, Node *head_two)
{
    Node *tmp = head;
    Node *tmp_two = head_two;
    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp_two->val)
        {
            flag = false;
        }
        tmp = tmp->next;
        tmp_two = tmp_two->next;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    cin.ignore();
    Node *head_two = NULL;
    Node *tail_two = NULL;
    int val_two;
    while (true)
    {
        cin >> val_two;
        if (val_two == -1)
        {
            break;
        }
        insert_at_tail(head_two, tail_two, val_two);
    }

    if (size(head) != size(head_two))
    {
        cout << "NO";
    }
    else
    {
        same_or_not(head, head_two);
    }
    // *Print Linked List
    // print_linked_list(head);
    // print_linked_list_backward(tail);
    // print_linked_list(head_two);
    // print_linked_list_backward(tail_two);

    return 0;
}