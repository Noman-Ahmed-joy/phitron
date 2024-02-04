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
int maxHeight(node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        return max(l, r) + 1;
    }
}

int main()
{
    node *Root = input_tree();
    cout << maxHeight(Root)<<endl;
    return 0;
}