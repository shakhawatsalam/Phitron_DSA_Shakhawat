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
// * insert at  head
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
// * Print a linked List
void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    int ops, val;
    Node *head = NULL;
    cout << "1: Insert at tail " << endl;
    cout << "2: print linked " << endl;
    cout << "3: Insert at Head " << endl;
    cout << "4: Insert at any position " << endl;
    while (true)
    {
        cin >> ops;

        if (ops == 1)
        {
            while (true)
            {
                cin >> val;
                if (val == -1)
                {
                    break;
                }
                insert_at_tail(head, val);
            }
        }
        else if (ops == 2)
        {
            print_linked_list(head);
        }
        else if (ops == 3)
        {
            cout << "Enter Your Value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (ops == 4)
        {
            int pos;
            cout << "Enter Your Value: ";
            cin >> val;
            cout << "Enter Your Position: ";
            cin >> pos;
            insert_at_any_position(head, pos, val);
        }
        else if (ops == 11)
        {
            break;
        }
    }

    return 0;
}