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

void if_left_null(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL)
    {
        cout << root->val << " ";
        if_left_null(root->right);
    }
    else
    {
        cout << root->val << " ";
        if_left_null(root->left);
    }
}
void if_right_null(Node *root)
{
    if (root == NULL)
        return;
    if (root->right == NULL)
    {
        if_right_null(root->left);
        cout << root->val << "s ";
    }
    else
    {
        if_right_null(root->right);
        cout << root->val << "s ";
    }
}

void print_right_most(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right)
    {
        cout << root->val << " ";
        print_right_most(root->right);
    }
    else
    {
        cout << root->val << " ";
        print_right_most(root->left);
    }
}
void print_left_most(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        print_left_most(root->left);
        cout << root->val << " ";
    }
    else
    {
        print_left_most(root->right);
        cout << root->val << " ";
    }
}
void all_function(Node *root)
{
    if (root == NULL)
        return;
    if (root->right == NULL && root->left == NULL)
    {
        cout << root->val << " ";
        return;
    }
    if (root->left == NULL)
    {

        if_left_null(root);
    }
    if (root->right == NULL)
    {

        if_right_null(root);
        cout << " hello;";
    }
    if (root->left != NULL && root->right != NULL)
    {
        print_left_most(root);

        print_right_most(root->right);
    }
}
int main()
{
    Node *root = input_tree();
    all_function(root);
}