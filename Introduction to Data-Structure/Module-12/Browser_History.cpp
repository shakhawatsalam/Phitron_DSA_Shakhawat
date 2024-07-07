#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

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
void visit(Node *head, Node *&cur, string url)
{

    string s;
    for (int i = 6; i < url.size(); i++)
    {
        s += url[i];
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == s)
        {
            break;
        }
        else
        {

            tmp = tmp->next;
        }
    }
    if (tmp == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {

        cur = tmp;
        cout << cur->val << endl;
    }
}
void prev(Node *&cur)
{
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void next(Node *&cur)
{
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    Node *cur = head;
    cin.ignore();
    while (q--)
    {

        string url;
        getline(cin, url);
        if (url != "prev" && url != "next")
        {

            visit(head, cur, url);
        }
        else if (url == "prev")
        {

            prev(cur);
        }
        else if (url == "next")
        {
            next(cur);
        }
    }
    return 0;
}
