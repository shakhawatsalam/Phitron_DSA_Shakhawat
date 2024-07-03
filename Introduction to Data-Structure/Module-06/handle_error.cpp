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

// * Insert at tail
void insert_at_tail(Node *&head, int v)
{
    Node *nweNode = new Node(v);

    if (head == NULL)
    {
        head = nweNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // * tmp ekhon last node a

    tmp->next = nweNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

// * Insert at any position

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position" << pos << endl
         << endl;
}

// * Linked list printing function
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List:";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

// * Insert at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Indrted At head" << endl
         << endl;
}
// * Delete From  Position
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Delete position" << " " << pos << endl
         << endl;
};

//  * Delete Head
void delete_head(Node *&head)
{
    if (head == NULL)
    {

        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted Head" << " " << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at  Tail:" << endl;         // * Done
        cout << "Option 2: Print Linked List:" << endl;       // * Done
        cout << "Option 3: Insert at any Position: " << endl; //*  Done
        cout << "Option 4: Insert Head: " << endl;            //* Done
        cout << "Option 5: Delete From Position:" << endl;    // *Done
        cout << "Option 6: Delete Head:" << endl;
        cout << "Option 7: Terminate:" << endl;
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
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value :";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {

                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter Value :";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}