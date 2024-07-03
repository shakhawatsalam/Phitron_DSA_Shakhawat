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

void insert_at_tail(Node *&head, int v)
{
    Node *nweNode = new Node(v);

    if (head == NULL)
    {
        head = nweNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // * tmp ekhon last node a

    tmp->next = nweNode;
}

void print_linked_list(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at  Tail:" << endl;
        cout << "Option 2: Print Linked List:" << endl;
        cout << "Option 3: Terminate:" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value : ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {

            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}