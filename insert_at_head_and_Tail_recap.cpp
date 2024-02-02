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
void print_link_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int size(node *head) // O(n)
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
void insert(node *head, int pos, int val) // O(n)
{
    node *newNode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) // O(n)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(node *&head, int val) // O(1)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(node *&head, node *&tail, int val) // time complexity O(1)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_link_list(head);
    cout << "Tail->" << tail->val << endl;

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }
   
    print_link_list(head);
    cout << "Tail->" << tail->val << endl;
    return 0;
}