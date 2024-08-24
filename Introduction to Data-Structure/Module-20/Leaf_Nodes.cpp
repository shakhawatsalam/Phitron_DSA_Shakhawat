#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long int val;
    Node *left;
    Node *right;
    Node(long long int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    long long int val;
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

        long long int l, r;
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

vector<long long int> v;
// void leaf_nodes(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         v.push_back(root->val);
//     }
//     leaf_nodes(root->left);
//     leaf_nodes(root->right);
// }
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            v.push_back(f->val);
        }

        if (f->left != NULL)
            q.push(f->left);

        if (f->right != NULL)
            q.push(f->right);
    }
}
int main()
{
    Node *root = input_tree();
    if (root)
    {
        level_order(root);
        // leaf_nodes(root);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if (!v.empty())
    {

        for (long long int x : v)
        {
            cout << x << " ";
        }
    }
}