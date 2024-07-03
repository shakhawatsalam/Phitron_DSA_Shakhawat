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

// * insert at tail
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
// * Print middle element of linked list.

// * Print Linked List
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Printed Llink list is :  ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

// * Print Middle Element
void print_middle_element(Node *head, int size)
{
    Node *tmp = head;
    if (size % 2 == 0)
    {
        for (int i = 1; i < size / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        for (int i = 1; i < size / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val;
    }
}
// *  Size of a  linked list
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    cout << endl;
    // size(head);
    print_middle_element(head, size(head));

    return 0;
}