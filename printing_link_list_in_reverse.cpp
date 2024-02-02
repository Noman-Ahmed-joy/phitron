#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_recursion(node *n)
{
    // base case
    if (n == NULL)
        return;
    cout << n->val <<endl;
    print_recursion(n->next);
}
void print_reverse(node *n)
{
    // base case
    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_recursion(head);
    cout<<"reverse:"<<endl;
    print_reverse(head);
    return 0;
}