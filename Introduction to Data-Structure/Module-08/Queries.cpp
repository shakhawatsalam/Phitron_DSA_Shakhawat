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

    tmp->next = nweNode;
}

void insert_at_head(Node *&head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_from_any_pos(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
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
    int t;
    cin >> t;
    while (t--)
    {

        int ops, val;
        cin >> ops >> val;

        if (ops == 0)
        {
            insert_at_head(head, val);
            print_linded_list(head);
        }
        else if (ops == 1)
        {
            insert_at_tail(head, val);
            print_linded_list(head);
        }
        else if (ops == 2)
        {
            if (val == 0)
            {
                if (head != NULL)
                {

                    delete_head(head);
                }
                print_linded_list(head);
            }
            else if (val > size(head))
            {
                print_linded_list(head);
            }
            else
            {
                delete_from_any_pos(head, val);
                print_linded_list(head);
            }
        }
    }

    return 0;
}