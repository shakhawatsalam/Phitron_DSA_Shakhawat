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
// * Check duplicate value
void check_duplicate(Node *head)
{
    Node *tmp = head;
    int frq[100] = {0};
    while (tmp != NULL)
    {
        frq[tmp->val]++;
        tmp = tmp->next;
    }
    int flag = false;
    for (int i = 0; i < 100; i++)
    {
        if (frq[i] > 1)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
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
    check_duplicate(head);
    // print_linked_list(head);

    return 0;
}