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
    Node *newNode = new Node(v);

    // * যদি কোন হেড না থাকে তাহলে newNode টি হেড হয়ে যাবে।
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // * যদি  হেড থাকে তাহলে নিচের কাজ গুলি হবে।
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

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
// * Count the size of linked list
void count_the_size_of_linked_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << "Linked List Size is : " << count;
}
// * Insert at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    count_the_size_of_linked_list(head);
    return 0;
}