#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node *input_tree()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1)
        root = NULL;
    else
        root = new node(val);
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1.ber kore ana
        node *p = q.front();
        q.pop();

        // 2.jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        node *myLeft;
        node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new node(r);
        p->left = myLeft;
        p->right = myRight;
        // 3. tar children gulo ke rakho
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.ber kore ana
        node *f = q.front();
        q.pop();

        // 2.jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakho
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    node *Root = input_tree();
    levelOrder(Root);
    return 0;
}