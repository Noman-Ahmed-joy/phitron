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
void print_link_list(node *head) // O(n)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int size(node *head) //O(n)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert(node *head, int pos, int val)// O(n)
{
    node *newNode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) //O(n)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
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
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "INVALID InDEx" << endl;
    }
    else
    {
        insert(head, 3, 100);
    }
    print_link_list(head);
    return 0;
}