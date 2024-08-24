#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    { // * Setp-> 1
        // * লাইন থেকে বের করে আনা হল q.front() এর মাধ্যমে f ভেরিয়েবল এর মধ্যে রাখা হল। এবং q.pop() এর মাধম্যে লাইন থেকে বের করে আনা হল।
        Node *f = q.front();
        q.pop();
        // * ‍Step -> 2
        //* যাবতীয় যা কাজ আছে করা।
        cout << f->val << " ";
        // * ‍Step -> 3
        //* children রাখা queue এর মধ্যে।
        if (f->left != NULL)
            q.push(f->left);

        if (f->right != NULL)
            q.push(f->right);
    }
}

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    // level_order(root);
    if (search(root, 100))
        cout << "Yes, Found" << endl;
    else
        cout << "NO, Not Found" << endl;
    return 0;
}